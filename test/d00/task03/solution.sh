#!/bin/bash

mkdir test0
touch -t 1906012047 test0
chmod 715 test0

touch -t 1906012146 test1
echo 'c' > test1
echo 'c' >> test1

chmod 714 test1

mkdir test2
touch -t 1906012245 test2
chmod 504 test2

touch -t 1906012344 test3
chmod 404 test3

touch -t 1906012343 test4
chmod 641 test4

ln test3 test5
touch -t 1906012344 test5
chmod 404 test5


ln -s test0 test6
touch -h -t 1906012220 test6
chmod 755 test6

chmod 715 test0
