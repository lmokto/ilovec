#include <stdio.h>

int main(void){
    
    int a, b;
    a = 0;
    b = a + 8;
    
    printf("Direccion de memoria de a: %u\n", (unsigned int)&a);
    printf("Direccion de memoria de b: %u\n", (unsigned int)&b);
    
    return 0;
}