#! /bin/bash
# script for removing design pattern from project
# created by tome.huang

CMD_NAME=$0
PATTERN=$1

if [ ${CMD_NAME%/*} == "." ];
then
    export TOOLS_ROOT="."
else
	export TOOLS_ROOT=${CMD_NAME%/*}
fi

PROJECT_ROOT=$TOOLS_ROOT/..
source $TOOLS_ROOT/pattern_common.sh

MODULE_LIST_FILE=$PROJECT_ROOT/$MODULE_LIST_FILE_NAME


function usage()
{
	echo "usage: $0 {pattern dir name}"
}

function check_project_exists()
{
    echo `check_dir_exists $PROJECT_ROOT`
}

if [ -z $PATTERN ];
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

if [ "`check_pattern_exists_in_file $PATTERN $MODULE_LIST_FILE`" == "0" ];
then
	# clear pattern info in $MODULE_LIST_FILE
	make_backup_file $MODULE_LIST_FILE ".old"
	if [ $? != 0 ];
	then
		echo "[ERROR] cannot backup file $MODULE_LIST_FILE"
		exit 1
	fi

	pattern_remove_from_file $PATTERN $MODULE_LIST_FILE
	if [ $? != 0 ];
	then
		echo "[WARNING] failed to clear pattern \"$PATTERN\" in $MODULE_LIST_FILE"
	fi

else
	echo "[WARNING] pattern \"$PATTERN\" not exists in file $MODULE_LIST_FILE"
fi

if [ "`check_dir_exists $PROJECT_ROOT/$PATTERN`" == "0" ];
then
	# clear pattern dir in $PROJECT_ROOT
	echo "[MESSAGE] pattern source dir $PROJECT_ROOT/$PATTERN found"
	text="clear it?(y/n)"
	users_choice_get_YN $text
	if [ $? == 0 ];
	then
		rm -rf $PROJECT_ROOT/$PATTERN
		echo cleared
	else
		echo "gave up, quit"
		exit 0
	fi
else
	echo "[WARNING] pattern source dir $PROJECT_ROOT/$PATTERN not exists"
fi

echo "[ALL DONE]"
