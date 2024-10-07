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
	$(CC) -Wall -g -O0 -c $(INC) -o obj/input.o src/input.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/output.o src/output.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/processing.o src/processing.cpp
	$(CC) -g -O0 -o bin/main.p obj/input.o obj/main.o obj/output.o obj/processing.o
