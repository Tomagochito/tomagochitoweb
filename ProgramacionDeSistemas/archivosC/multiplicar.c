#include <stdio.h>
#include "estructura.h"

void multiplicar(int a, int b){
    
    if(a==0 || b==0){
        printf("La division es: 0");
    }
       else {
    printf("La multiplicacion es: %d\n", a * b);
}
}