// ((the "gets" function is dangerous and should not be used)).


#include <stdio.h>

#define MAXLON 11

int main(void){
    char a[MAXLON+1], b[MAXLON+1];
    
    printf("Introduce una cadena: ");
    gets(a);
    
    printf("Introduce otra cadena: ");
    gets(b);
    
    printf("La primera es %s y la segunda es %s\n", a, b);
    
    return 0;
}