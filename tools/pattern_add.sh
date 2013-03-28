#! /bin/bash
# script for adding new design pattern into project
# created by tome.huang

CMD_NAME=$0
PATTERN=$1

export TOOLS_ROOT=${CMD_NAME%%/*}/tools
PROJECT_ROOT=$TOOLS_ROOT/..
source $TOOLS_ROOT/pattern_common.sh

MODULE_LIST_FILE=$PROJECT_ROOT/$MODULE_LIST_FILE_NAME


function usage()
{
	echo "usage: $0 {new pattern}"
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
	echo "[ERROR] pattern \"$PATTERN\" already exists in file $MODULE_LIST_FILE"
	echo "by remove the pattern, run pattern_del.sh"
	exit 1
fi

if [ "`check_dir_exists $PROJECT_ROOT/$PATTERN`" == "0" ];
then
	echo "[WARNING] pattern source dir $PROJECT_ROOT/$PATTERN already exists"
	text="clear the old?(y/n)"
	users_choice_get_YN $text
	if [ $? == 0 ];
	then
		rm -rf $PROJECT_ROOT/$PATTERN
		echo cleared
	else
		echo "gave up, quit"
		exit 0
	fi
fi

# backup list config file
make_backup_file $MODULE_LIST_FILE ".old"

if [ $? != 0 ];
then
	echo "[ERROR] cannot backup file $MODULE_LIST_FILE"
	exit 1
fi

# add pattern to file
pattern_add_to_file $PATTERN $MODULE_LIST_FILE

if [ $? != 0 ];
then
	echo "[ERROR] cannot append $PATTERN to file $MODULE_LIST_FILE"
	exit 1
fi

# make pattern dir
pattern_add_dir_source $PATTERN $PROJECT_ROOT/$PATTERN

if [ $? != 0 ];
then
	echo "[ERROR] cannot make source dir for $PATTERN"
	exit 1
fi

echo "[ALL DONE]"
