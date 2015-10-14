
CC=gcc
SRC_DIR=src/
BLD_DIR=build/
X_LIBS=-lXm -lXt -lX11

memo:
	$(CC) -o $(BLD_DIR)memo $(SRC_DIR)memo.c $(X_LIBS) 
