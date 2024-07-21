
13:30
g++ hellor.c
./a.out > a.txt
cat -v a.txt

// посмотреть все дирректории выше
ls -d ../*


gcc -o, -g, -O0, -O2, -Wall, -lm


git clean -df

gcc allthree.c -o allthree
./allthree < tests/001.in > allthree.log
./allthree < tests/002.in > allthree.log // пусто + сломало docker
./allthree < tests/002.in 2> allthree.log
./allthree < tests/001.in 1> 001.out 2> 001.err
./allthree < tests/002.in 1> 002.log 2>1 // не работает
./allthree < tests/002.in >& 002.log


echo "Hello"
echo $HOME
echo $?


echo "Hello" && echo " World"
true && " World"
false || " World"
false
echo $? // 1
true
echo $? // 0


( ./allthree < tests/002.in || false ) >& allthree.log

echo $SHELL
/bin/bash -c "./allthree < tests/002.in" >& allthree.log


!!!
ls --color=auto
cd ~
echo "alias ls='ls --color=auto'" >> ./.bashrc || echo "alias ls='ls --color=auto'" > ./.bashrc

home2=/usr/src/bash
cd $home2

!!!



============ 39:34 Автоматизация тестирования и циклы =======
for i in tests/*.in; do echo $i; cat $i; ./allthree < $i; done


a=10
echo ${a}b
pwd
whoami
which gcc
which clang
echo $HOME


echo $PATH
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/


export PATH=/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/
in:/bin
PATH=$PATH:$(pwd)
/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/src/bash
export PATH=$PATH:~/folder
export PATH=$PATH:$(pwd)

!!!!!
export PATH=$PATH:.
!!!!!


========================== 56:15 Однострочники ==============
border=3
seq 1 1 $border // for i in 1 2 3; do echo $i; done
rm -rf myfolder
folder="myfolder"
mkdir -p $folder && cd $folder && for i in $(seq 1 1 10); do echo 00${i}; echo $i > ${i}.in; done && cd ..



=========== 01:05:05 Скрипты, их окружение и шебанг ==========
vim first.sh
vim fst.sh
folder=myfolder
./fst.sh
ls -la fst.sh
-rwxrwxrwx 1 tilir tilir 26 Sep 16 13:12 first.sh
-rw-r--r-- 1 root root 26 Jul 21 18:55 fst.sh
chmod "a-x" fst.sh
chmod 775 fst.sh
./fst.sh
-bash: ./fst.sh: Permission denied
chmod "a+x" fst.sh
chmod "u+x" fst.sh
bash fst.sh
echo $folder
source fst.sh
export folder
bash fst.sh

export -p // посмотреть все экспортированные переменные

#!/bin/bash
#comment
echo "folder = ${folder}"

// с помощью env выстовим environment и запустили программу
env border=10 second.sh



============ 01:19:30 Тонкости написания скриптов ==========
Another possible solution using unix text editor vi:
open file in vi edit with vi filename.sh command;
type in vi :set ff=unix command;
save file with :wq
It will save the file with unix line endings.

border=10
echo "a${border}b"
a10b
echo $(( 5 + $border ))
15

$ if [ "x$border" = "x" ]; then echo "Yes"; fi
$ unset border
$ if [ "x$border" = "x" ]; then echo "Yes"; fi # Yes



=============== 01:31:20 Супероружие: grep =============
cd ..
grep rec *
grep -r "fib" *

cd llvm
ls
grep -riI dominator *
grep -lriI dominator *



============= 01:37:50 Супероружие: sed ================





