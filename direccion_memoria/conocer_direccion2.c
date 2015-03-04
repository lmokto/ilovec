#include <stdio.h>
#define TALLA 5

int main(void){
    int a[TALLA], i;
    
    for (i = 0; i<TALLA;i++){
        printf("Direccion de a[%d]: %u\n", i, (unsigned int) &a[i]);
    }
    
    printf("Direccion de a: %u\n", (unsigned int) a);
    
    return 0;
}