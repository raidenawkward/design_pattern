#! /bin/bash
# script for adding new class source files
# created by tome.huang

# $1 - class name
# [$2] - file dir

CMD_NAME=$0
CLASS_NAME=$1
TAR_DIR=.


if [ ${CMD_NAME%/*} == "." ];
then
	export TOOLS_ROOT="."
	echo TOOLS_ROOT found: $TOOLS_ROOT
else
	export TOOLS_ROOT=${CMD_NAME%/*}
	echo TOOLS_ROOT found: $TOOLS_ROOT
fi

source $TOOLS_ROOT/pattern_common.sh


function usage()
{
	echo "usage: $0 {class} [dir]"
}

if [ -z $CLASS_NAME ];
then
	usage
	exit 1
fi

if [ ! -z $2 ];
then
	TAR_DIR=$2
fi

if [ "`check_dir_exists $TAR_DIR`" != "0" ];
then
	echo "[WARNING] target dir TAR_DIR not exists"
	text="create one(y/n)"
	users_choice_get_YN $text
	if [ $? == 0 ];
	then
		mkdir -p $TAR_DIR
		if [ $? != 0 ];
		then
			echo "[ERROR] create dir $TAR_DIR failed"
			exit 1
		else
			echo "[MESSAGE] dir $TAR_DIR created"
		fi
	else
		echo "gave up, quit"
		exit 0
	fi
fi

class_source_code_generate $CLASS_NAME $TAR_DIR
if [ $? == 0 ];
then
	echo "[ALL DONE]"
else
	echo "[ERROR] failed on $CLASS_NAME in $TAR_DIR"
fi
