#! /usr/bin/env bash
# Here we setup the environment
# variables needed by the tinyos 
# make system

echo "Setting up for TinyOS 2.x"
export TOSROOT=
export TOSDIR=
export MAKERULES=
export CONTRIBROOT=
export TOSMAKE_PATH=

TOSROOT="/opt/tinyos-2.x"
TOSDIR="$TOSROOT/tos"
CLASSPATH=$CLASSPATH:$TOSROOT/support/sdk/java:$TOSROOT/support/sdk/java/tinyos.jar:/opt/Californium/californium/src/main/java:/opt/Californium/californium-proxy/src/main/java:/opt/Californium/californium/src/guava-10.0-sources.jar:/opt/Californium/californium/src/test/java:.
MAKERULES="$TOSROOT/support/make/Makerules"
PYTHONPATH=$PYTHONPATH:$TOSROOT/support/sdk/python/
CONTRIBROOT="/opt/tinyos-2.x-contrib"
TOSCONTRIB=$CONTRIBROOT
TOSMAKE_PATH="$CONTRIBROOT/imms/support/make $CONTRIBROOT/imms/hotmac/support/make"
LOWPAN_ROOT=$TOSROOT

MYDIR=`pwd`

cd $TOSROOT
TOS_VERSION=`svn info | grep -i "Revision:"`
#TOS_SVN_VERSION=`svn info -r HEAD | grep -i "Letzte geänderte Rev:"`
cd $CONTRIBROOT/imms
IMMS_VERSION=`svn info | grep -i "Revision:"`
#IMMS_SVN_VERSION=`svn info -r HEAD | grep -i "Letzte geänderte Rev:"`
#IMMS_HEAD=`svn info -r HEAD | grep -i "Letzte ge"`

CONSAS_PATH="/home/sd/Sensornetz/ConSAS/"
cd $CONSAS_PATH
CONSAS_VERS=`svn info | grep -i "Revision:"`
#CONSAS_HEAD=`svn info -r HEAD | grep -i "Letzte ge"`

echo "-------------------------------------------------"
echo "TinyOS path:         $TOSROOT"
echo "                     $TOS_VERSION"
echo "Contrib path:        $CONTRIBROOT"
echo "IMMS contrib path:   $CONTRIBROOT/imms"
echo "                     $IMMS_VERSION"
#echo "                     HEAD $IMMS_HEAD"
echo "ConSAS contrib path: $CONSAS_PATH"
echo "                     $CONSAS_VERS"
#echo "                     HEAD $CONSAS_HEAD"
echo "-------------------------------------------------"
AVR_GCC_VERSION=`avr-gcc --version | grep avr-gcc`
echo "AVR-GCC:           $AVR_GCC_VERSION"
MSP_GCC_VERSION=`msp430-gcc --version | grep msp430-gcc`
echo "MSP-GCC:           $MSP_GCC_VERSION"
NCC_GCC_VERSION=`nescc --version | grep nescc`
echo "NesC:              $NCC_GCC_VERSION"
echo

export TOSROOT
export TOSDIR
export CLASSPATH
export PYTHONPATH
export MAKERULES
export CONTRIBROOT
export TOSCONTRIB
export TOSMAKE_PATH
export PATH

cd $MYDIR


