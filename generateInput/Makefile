#
# Makefile for the programs
#

CPPFLAGS = -g -Wall -Werror -O2 -lm -std=c++11

CXX=g++

TARGET = prog
BIN_DIR = bin
INC_DIR = inc
CPP_FILES=$(wildcard src/*.cpp)

$(TARGET): $(CPP_FILES)
	$(CXX) $(CPPFLAGS) -I$(INC_DIR) -o $(BIN_DIR)/$(TARGET) $(CPP_FILES)
