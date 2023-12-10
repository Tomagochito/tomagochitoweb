CC = gcc 
NAMELIB = dynamiclib
DYNAMICLINKING = -shared -o 
CREATELIB_SO = $(CC) $(DYNAMICLINKING) $(NAMELIB)
DYNAMICLINKING = -shared -o 
CFLAGS = -Wall -g
SRCS = main.c
C_LIBS = funcionesLib.c
HEADERS = headerLib.h
ASSEMBLY_SRCS = $(SRCS:.c=.o)
ASSEMBLY_C_LIBS = $(C_LIBS:.c=.o)
EXENAME = dynamicexe

all: $(EXENAME) clean

$(EXENAME): assembly_srcs createlib_so
	$(CC) -o $@ $(ASSEMBLY_SRCS) ./$(NAMELIB)

assembly_srcs: $(ASSEMBLY_SRCS)

%.o : %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

assembly_c_libs: $(ASSEMBLY_C_LIBS)

%.o : %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

createlib_so: assembly_c_libs
	$(CREATELIB_SO) $(ASSEMBLY_C_LIBS)

clean:
	rm -f *.o

	