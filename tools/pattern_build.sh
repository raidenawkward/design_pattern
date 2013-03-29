#! /bin/bash
# script for building design pattern from source code
# created by tome.huang

# $1 - pattern source code dir
# $2 - source code build dir

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

echo "[MESSAGE] project root $PROJECT_ROOT"


function usage()
{
	echo "usage: $0 {pattern dir name} [build dir]"
}

function check_project_exists()
{
    echo `check_dir_exists $PROJECT_ROOT`
}

cd $PROJECT_ROOT
PROJECT_ROOT=`pwd`

if [ -z $PATTERN ];
then
	usage
	exit 1
fi

if [ "$PATTERN" == "all" ];
then
	BUILD_TARGET=$PROJECT_ROOT
else
	BUILD_TARGET=$PROJECT_ROOT/$PATTERN
fi

if [ ! -z $2 ];
then
	if [ "$PATTERN" == "all" ];
	then
		BUILD_DIR=$2
	else
		BUILD_DIR=$2/$PATTERN
	fi
else
	if [ "$PATTERN" == "all" ];
	then
		BUILD_DIR=$PROJECT_ROOT/build
	else
		BUILD_DIR=$PROJECT_ROOT/build/$PATTERN
	fi
fi

if [ "`check_project_exists`" != "0" ];
then
	echo "[ERROR] project dir $PROJECT_ROOT not exists"
	exit 1
fi

if [ "`check_dir_exists $BUILD_DIR`" == "0" ];
then
	echo "[MESSAGE] clear build history files"
	rm -rf $BUILD_DIR/*
else
	echo "[MESSAGE] make build dir"
	mkdir -p $BUILD_DIR

	if [ $? != 0 ];
	then
		echo "[ERROR] mkdir failed"
		exit 1
	fi
fi

echo "[MESSAGE] changing pwd to $BUILD_DIR"
cd $BUILD_DIR
if [ $? != 0 ];
then
	echo "[ERROR] change dir to $BUILD_DIR failed"
	exit 1
fi

# run cmake
cmake $BUILD_TARGET
if [ $? != 0 ];
then
	echo "[ERROR] cmake failed when configuating $BUILD_TARGET"
	exit 1
fi

# run make
make

echo "[ALL DONE]"
