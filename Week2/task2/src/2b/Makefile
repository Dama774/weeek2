SHELL=/bin/bash
INC=-Iinclude
CC=g++

all: clean prepare build
	@echo "Building application ------ done"
	echo $(SHELL)

clean:
	rm -rf bin
	rm -rf obj

prepare:
	mkdir -p bin
	mkdir -p obj

build:
	
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main2.o src/main2.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/square_root.o src/square_root.cpp
	$(CC) -g -O0 -o bin/main2.p obj/main2.o obj/square_root.o
