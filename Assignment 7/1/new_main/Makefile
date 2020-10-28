compiler = g++
name = new_shape_main

all: main_shape.o
	$(compiler) main_shape.o -L../lib -lshape_lib -o new_application

main.o: main_shape.cpp
	$(compiler) -c main_shape.cpp

