#include <stdio.h>

#define TALLA 10

int main(void){
    int original[TALLA] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int copia[TALLA];
    int i;
    
    for (i=0;i<TALLA;i++){
        copia[i]=original[i];
    }
    
    for (i=0;i<TALLA;i++){
        printf("print original %d\n", original[i]);
        printf("print copia %d\n", copia[i]);
    }
    
    return 0;
}