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
	
	$(CC) -Wall -g -O0 -c $(INC) -o obj/main.o src/main.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/age_suffix.o src/age_suffix.cpp
	$(CC) -Wall -g -O0 -c $(INC) -o obj/age_input.o src/age_input.cpp
	$(CC) -g -O0 -o bin/main.p obj/main.o obj/age_suffix.o obj/age_input.o

