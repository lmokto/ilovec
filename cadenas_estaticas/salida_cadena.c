#include <stdio.h>

#define MAXLON 80

int main(void){
    char cadena[MAXLON+1] = "una cadena"; //reservamos 81 caracteres, 80 caracteres mas el terminador
    
    printf("el valor de la cadena es %s. \n", cadena);
    
    return 0;
}