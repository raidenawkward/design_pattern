#! /bin/bash
# functions for design pattern
# created by tome.huang
# NEEDS env TOOLS_ROOT

MODULE_LIST_FILE_NAME='pattern_config.cmake'


# $1 - dir path
# returns [echo]
# 0 - exists
# 1 - not exists
function check_dir_exists()
{
	if [ -d $1 ];
	then
		echo 0
	else
		echo 1
	fi
}

# $1 - source path
# returns [echo]
# 0 - exists
# 1 - not exists
function check_source_exists()
{
	source_file=$1

	if [ -z $source_file ];
	then
		echo 1
		return
	fi

	if [ -f $source_file ];
	then
		echo 0
	else
		echo 1
	fi
}

# $1 pattern
# $2 file
# returns [echo]
# 0/1 - exits/not exists
# 2 - empty pattern
# 3 - no file passed in
function check_pattern_exists_in_file()
{
	pattern=$1
	file=$2

	if [ -z $pattern ];
	then
		echo 2
	fi

	if [ -z $file ];
	then
		echo 3
	fi

	grep -q "^[[:space:]]*$pattern[[:space:]]*$" $file
	if [ $? == 0 ];
	then
		echo 0
	else
		echo 1
	fi
}

# $1 file path
# $2 backup suffix
# returns
# 0 - succeed
function make_backup_file()
{
	suffix=".old"

	if [ "`check_source_exists $1`" != "0" ];
	then
		echo "[WARNING] file not exists: $1"
		return 1
	fi

	if [ ! -z $2 ];
	then
		suffix=$2
	fi

	cp -f $1{,$suffix}

	return $?
}

# $1 pattern
# $2 file
# returns
# 0 - succeed
function pattern_remove_from_file()
{
	pattern=$1
	file=$2

	if [ -z $pattern ];
	then
		return 1
	fi

	if [ "`check_source_exists $file`" != "0" ];
	then
		return 1
	fi

	temp_file=$file.tmp____
	sed "/^[[:space:]]*$pattern[[:space:]]*$/d" $file  > $temp_file

	if [ $? != 0 ];
	then
		rm -f $temp_file
		return 1
	fi

	if [ ! -f $temp_file ];
	then
		return 1
	fi

	mv $temp_file $file

	return $?
}

# get user's y/n choice
# $1 tip context
# returns[echo]
# 0 - yes
# 1 - no
function users_choice_get_YN()
{
	echo "$*"
	read s
	res=1

	case $s in
	Y|y|YES|yes|Yes) res=0;;
	N|n|NO|no|No) res=1;;
	*)
		echo [ERROR]invalid input
		exit 1
		;;
	esac

	if [ "$res" == "0" ];
	then
		return 0
	else
		return 1
	fi
}

# $1 pattern
# $2 file
# returns
# 0 - succeed
function pattern_add_to_file()
{
	pattern=$1
	file=$2

	if [ -z $pattern ];
	then
		return 1
	fi

	if [ "`check_source_exists $file`" != "0" ];
	then
		return 1
	fi

	temp_file=$file.tmp____
	sed "/^[[:space:]]*[)][[:space:]]*$/i 	$pattern" $file  > $temp_file

	if [ $? != 0 ];
	then
		rm -f $temp_file
		return 1
	fi

	if [ ! -f $temp_file ];
	then
		return 1
	fi

	mv $temp_file $file

	return $?
}

# $1 pattern
# $2 dir
# returns
# 0 - succeed
function __pattern_cmake_file_generate()
{
	pattern=$1
	dir=$2

	if [ -z $pattern ] || [ -z $dir ];
	then
		return 1
	fi

	cmake_file=$dir/CMakeLists.txt

	PATTERN_CMAKE_TEMPLETE="\
cmake_minimum_required(VERSION 2.8)\n\
\n\
PROJECT(`echo $pattern | tr [:lower:] [:upper:]`)\n\
\n\
SET(TAR $pattern)\n\
SET(SRC_DIR src)\n\
\n\
SET(INSTALLED_DIR \${PROJECT_BINARY_DIR}/../bin)\n\
\n\
AUX_SOURCE_DIRECTORY(\${SRC_DIR} SRC)\n\
\n\
ADD_EXECUTABLE(\${TAR} \${SRC})\n\
	"
	echo -e $PATTERN_CMAKE_TEMPLETE > $cmake_file

	return $?
}

# $1 class
# [$2] dir - source code dir
# returns
# 0 - succeed
function class_source_code_generate()
{
	class=$1
	dir=.

	if [ -z $class ];
	then
		return 1
	fi

	if [ ! -z $2 ];
	then
		dir=$2
	fi

	header_file_name=`echo $class | tr [:upper:] [:lower:]`.h
	cpp_file_name=`echo $class | tr [:upper:] [:lower:]`.cpp

	PATTERN_HEADER_TEMPLETE="\
#ifndef _`echo $header_file_name | tr [:lower:] [:upper:] | tr . _`\n\
#define _`echo $header_file_name | tr [:lower:] [:upper:] | tr . _`\n\
\n\
class $class {\n\
\n\
public:\n\
	\t$class();\n\
	\tvirtual ~$class();\n\
};\n\
\n\
#endif // _`echo $header_file_name | tr [:lower:] [:upper:] | tr . _`\n\
	"
	echo -e $PATTERN_HEADER_TEMPLETE > $dir/$header_file_name

	PATTERN_CPP_TEMPLETE="\
#include \"$header_file_name\"\n\
\n\
$class::$class()\n\
{\n\
}\n\
\n\
$class::~$class()\n\
{\n\
}\
	"
	echo -e $PATTERN_CPP_TEMPLETE > $dir/$cpp_file_name

	return 0
}

# $1 pattern
# $2 dir - source code dir
# $3 class name
# returns
# 0 - succeed
function __pattern_source_code_generate()
{
	pattern=$1
	dir=$2
	class=$3

	if [ -z $pattern ] || [ -z $dir ] || [ -z $class ];
	then
		return 1
	fi

	header_file_name=`echo $class | tr [:upper:] [:lower:]`.h
	cpp_file_name=`echo $class | tr [:upper:] [:lower:]`.cpp

	PATTERN_MAIN_TEMPLETE="\
#include <stdio.h>\n\
#include <stdlib.h>\n\
\n\
#include \"$header_file_name\"\n\
\n\
\n\
int main(int argc, char** argv)\n\
{\n\
\treturn 0;\n\
}\
	"
	echo -e $PATTERN_MAIN_TEMPLETE > $dir/main.cpp

	class_source_code_generate $class $dir
}

# $1 pattern
# $2 dir
# returns
# 0 - succeed
function pattern_add_dir_source()
{
	pattern=$1
	dir=$2

	if [ -z $pattern ];
	then
		return 1
	fi

	mkdir -p $dir
	if [ $? != 0 ];
	then
		return 1
	fi

	__pattern_cmake_file_generate $pattern $dir
	if [ $? != 0 ];
	then
		return 1
	fi

	mkdir -p $dir/src
	if [ $? != 0 ];
	then
		return 1
	fi

	echo "input class name for pattern $pattern"
	read class_name
	users_choice_get_YN "Create default code for \"$class_name\"?(y/n)"
	if [ $? != 0 ];
	then
		echo "[USER STOPPED]"
		exit 0
	fi

	__pattern_source_code_generate $pattern $dir/src $class_name
	if [ $? != 0 ];
	then
		return 1
	fi

	return 0
}
