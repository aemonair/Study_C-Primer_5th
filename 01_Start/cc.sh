#!/bin/sh

CC=gcc
GPP=g++

PRONAME=$0
if [ -z $1 ];then
    echo -e "\033[0;31mUsage : $PRONAME < C-Programs File's name >\033[0m"
    exit 1
fi
FLAGS="$* -g -lpthread"

FILN=$1
FILO=$(echo  "$1"|sed 's/\.[Cc]\|\.cpp$//g')
#FILO=$(echo  "$1"|sed 's/\.[Cc]$//g')

#filename=$(basename "$FILN")
#echo $filename
#extension="${filename##*.}"

# C/CPP
extension="${FILN##*.}"
#echo $extension

if [ ${extension} = "cpp" ];then
    CC=g++
elif [ ${extension} = "c" ];then
	CC=gcc
fi
#echo -e ${CC}

#echo $FILN
#echo $FILO
#echo $FLAGS

if [ ${FILN} = ${FILO} ];then
   echo -e "\033[0;31m Input filename is not a C/CPP-Program file !\033[0m"
   exit 1
fi

echo "Compiling ..."
echo -e "CC      \033[0;35m${FLAGS}\033[0m"
${CC} -o ${FILO}  ${FLAGS}
#echo $CC
#echo ${FILO}
#echo ${FLAGS}
if [ 0 -ne $? ];then
  echo -e "\033[43;33mERROR ${CC} -o ${FILO} ${FILN} ${FLAGS}\033[0m"
else
#  echo "${FILO}   is OK."
  echo -e "\033[0;36m        Completed .\033[0m"
fi
echo -e "\033[0;31m        $(date)\033[0m"
exit 0
