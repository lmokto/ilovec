#include <stdio.h>

#define MAXLON 80

int main(void){
    char cadena[MAXLON+1];
    scanf("%s", &cadena[0]);
    printf("La cadena leida es %s. \n", cadena);
    
    return 0;
}