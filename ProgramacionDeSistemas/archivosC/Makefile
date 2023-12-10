CC = gcc
CFLAGS = -Wall -g

SRCS = calculadora.c sumar.c restar.c multiplicar.c dividir.c
HEADERS = estructura.h
PREPROCESSING = $(SRCS:.c=.i)
COMPILATION = $(SRCS:.c=.s)
ASSEMBLY = $(SRCS:.c=.o)
LINKING = ejecutable


all: preprocessing compilation assembly linking

preprocessing: $(PREPROCESSING)

%.i: %.c $(HEADERS)
	$(CC) -E $(CFLAGS) $< -o $@

compilation: $(COMPILATION)

%.s: %.c $(HEADERS)
	$(CC) -S $(CFLAGS) $< -o $@

#Esto se lee de la siguiente manera: "Para construir un archivo objeto (%.o), 
#compílalo a partir del archivo fuente correspondiente (%.c) y todos los encabezados 
#necesarios ($(HEADERS)), utilizando el compilador $(CC) con las banderas de compilación
# $(CFLAGS), y guarda el resultado en el archivo objeto especificado ($@)".

assembly: $(ASSEMBLY)

%.o: %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

linking: $(ASSEMBLY)
	$(CC) $(ASSEMBLY) -o $(LINKING)

