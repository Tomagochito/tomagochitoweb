CC = gcc 
NAMELIB = mystaticlib
CREATELIB_A = ar rcs $(NAMELIB)
STATICLINKING = -static -o 
CFLAGS = -Wall -g
SRCS = main.c
C_LIBS = funcionesLib.c
HEADERS = headerLib.h
ASSEMBLY_SRCS = $(SRCS:.c=.o)
ASSEMBLY_C_LIBS = $(C_LIBS:.c=.o)
EXENAME = staticexe

all: $(EXENAME) clean

$(EXENAME): assembly_srcs createlib_a
	$(CC) $(STATICLINKING) $@ $(ASSEMBLY_SRCS) $(NAMELIB)

assembly_srcs: $(ASSEMBLY_SRCS)

%.o : %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

assembly_c_libs: $(ASSEMBLY_C_LIBS)

%.o : %.c $(HEADERS)
	$(CC) -c $(CFLAGS) $< -o $@

createlib_a: assembly_c_libs
	$(CREATELIB_A) $(ASSEMBLY_C_LIBS)

clean:
	rm -f $(NAMELIB) *.o

	