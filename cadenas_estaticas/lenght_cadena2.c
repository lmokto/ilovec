#include <stdio.h>

#define MAXLON 80


int main(void){
    char a[MAXLON+1];
    int i;
    
    printf("Introduce una cadena (max %d cars.): ", MAXLON);
    gets(a);
    i = 0;
    while(a[i++]); //sin sentencia alguna en while...
    printf("Longituid de la cadena: %d\n", i-1);
    
    return 0;
}