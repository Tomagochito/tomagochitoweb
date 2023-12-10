#include <stdio.h>
#include "estructura.h"

void dividir(int a, int b) {
    if (a == 0) {
        printf("La división es: 0\n");
    } else if (b == 0) {
        printf("La división es Indefinida\n");
    } else {
        printf("La división es: %d\n", a / b);
    }
}
