#!/usr/bin/env bash

cd ~/Documents/C++\ course/Assignment\ 7/2

git clone --branch master https://github.com/MarcinZwierzynski/C-course.git

cd C-course/Assignment\ 7/1/lib
make
cd ..
cd new_main
make
./new_application