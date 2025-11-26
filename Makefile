CC = gcc
SRC = ./src
OBJS = ./objs
TARGET = livraria
LIMPAR = rm

all: objetos
	$(CC) $(OBJS)/menus.o $(OBJS)/main.o -o $(TARGET)


objetos:
	$(CC) -c $(SRC)/menus.c -o $(OBJS)/menus.o
	$(CC) -c main.c -o $(OBJS)/main.o


clear:
	$(LIMPAR) $(OBJS)/*.o
	$(LIMPAR) $(TARGET)