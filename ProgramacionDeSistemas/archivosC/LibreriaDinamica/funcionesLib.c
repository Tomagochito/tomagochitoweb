#include "headerLib.h"
#include <stdio.h>
#include <ctype.h>
void contarPalabra(char palabra[20]) {
    int contador = 0;
    while (palabra[contador] != '\0') {
        contador++;
    }
    printf("La palabra tiene %d caracteres.\n", contador);
}
void contarEspacios(char palabra[20]) {
    int contador = 0;
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (isspace(palabra[i])) {
            contador++;
        }
    }
    printf("La palabra tiene %d espacios.\n", contador);
}
void contarVocales(char palabra[20]) {
    int contador = 0;
    for (int i = 0; palabra[i] != '\0'; i++) {
        char caracter = tolower(palabra[i]);
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            contador++;
        }
    }
    printf("La palabra tiene %d vocales.\n", contador);
}
void contarNumeros(char palabra[20]) {
    int contador = 0;
    for (int i = 0; palabra[i] != '\0'; i++) {
        if (isdigit(palabra[i])) {
            contador++;
        }
    }
    printf("La palabra tiene %d numeros.\n", contador);
}
