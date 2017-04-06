# Define the symbols we might want to change:
INC_DIR = ../src/Headers
SRC_DIR = ../src/Code
OBJ_DIR = binaries

CC	= g++
CCFLAGS = -g -I$(INC_DIR)

DEPS = $(INC_DIR)/base.h

SRCS = $(SRC_DIR)/base.cpp $(SRC_DIR)/main.cpp
OBJS = $(OBJ_DIR)/base.o $(OBJ_DIR)/main.o 

simulation: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o simulation

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) $(CCFLAGS) -c $^ -o $@   

clean:
	rm -rf *o $(OBJS)
	rm simulation

