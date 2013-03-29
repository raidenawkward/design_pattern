#! /bin/bash
# script for renaming design pattern exists in project
# created by tome.huang

CMD_NAME=$0
PATTERN_FROM=$1
PATTERN_TO=$2


if [ ${CMD_NAME%/*} == "." ];
then
	export TOOLS_ROOT="."
	echo TOOLS_ROOT found: $TOOLS_ROOT
else
	export TOOLS_ROOT=${CMD_NAME%/*}
	echo TOOLS_ROOT found: $TOOLS_ROOT
fi

PROJECT_ROOT=$TOOLS_ROOT/..
source $TOOLS_ROOT/pattern_common.sh

MODULE_LIST_FILE=$PROJECT_ROOT/$MODULE_LIST_FILE_NAME


function usage()
{
	echo "usage: $0 {from} {to}"
}

function check_project_exists()
{
    echo `check_dir_exists $PROJECT_ROOT`
}

if [ -z $PATTERN_FROM ] || [ -z $PATTERN_TO ];
then
	usage
	exit 1
fi

if [ "`check_project_exists`" != "0" ];
then
	echo "[ERROR] project dir $PROJECT_ROOT not exists"
	exit 1
fi

if [ "`check_source_exists $MODULE_LIST_FILE`" != "0" ];
then
	echo "[ERROR] pattern config file $MODULE_LIST_FILE not exists"
	exit 1
fi

if [ "`check_pattern_exists_in_file $PATTERN_FROM $MODULE_LIST_FILE`" != "0" ];
then
	echo "[WARNING] pattern \"$PATTERN_FROM\" does not exist in file $MODULE_LIST_FILE"

else
	# backup list config file
	make_backup_file $MODULE_LIST_FILE ".old"

	if [ $? != 0 ];
	then
		echo "[ERROR] cannot backup file $MODULE_LIST_FILE"
		exit 1
	fi

	# rename in module list file
	pattern_rename_in_file $PATTERN_FROM $PATTERN_TO $MODULE_LIST_FILE
	if [ $? != 0 ];
	then
		echo "[ERROR] cannot rename $PATTERN_FROM to $PATTERN_TO in file $MODULE_LIST_FILE"
	fi
fi

if [ "`check_dir_exists $PROJECT_ROOT/$PATTERN_FROM`" != "0" ];
then
	echo "[WARNING] pattern source dir $PROJECT_ROOT/$PATTERN_FROM does not exist"
else
	# move the code resource dir
	mv $PROJECT_ROOT/$PATTERN_FROM $PROJECT_ROOT/$PATTERN_TO
fi

echo "[ALL DONE]"
