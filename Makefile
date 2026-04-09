#compilador
CC = gcc

#bandera de compilacion
CFLAGS = -Wall -Wextra -Iinclude #el -I indica en donde va a buscar todos los archivos .h

#archivos a compilar
SRC = src/*.c main.c

#nombre del ejecutable
TARGET = lista_ligada

#regla principal para compilar
all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

#regla para ejecutar
run: all
	./$(TARGET)
#regla para borrar los archivos generados al compilar
clean:
	rm -f $(TARGET)