#include <stdio.h>
#include <string.h>

#define MAXLON 80

int main(void){
    char a[MAXLON+1], b[MAXLON+1];
    
    printf("Introduce un texto (max %d cars.): ", MAXLON);
    gets(a);
    printf("Introduce otro texto (max %d cars.): ", MAXLON);
    gets(b);
    
    strcat(a, b); //equivalente a la asignacion python a = a + b
    printf("Concatenacion de ambos: %s", a);
    
    return 0;
}