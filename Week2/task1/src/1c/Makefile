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
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main3.o src/main3.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/badminton.o src/badminton.cpp
	$(CC) -g -O0 -o bin/main.p obj/main3.o obj/badminton.o
