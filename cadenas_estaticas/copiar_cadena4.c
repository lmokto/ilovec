#include <string.h>

#define MAXLON 10

int main(void){
    char original[MAXLON+1] = "cadena";
    char copia[MAXLON+1];
    
    strcpy(copia, original); //Copia el contenido de original a copia.
    
    return 0;
}