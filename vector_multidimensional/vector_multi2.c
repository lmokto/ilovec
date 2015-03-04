#include <stdio.h>

#define TALLA 3

int main(void){
    int a[TALLA][TALLA];
    int i, j;
    
    for(i=0; i<TALLA;i++){
        for(j=0; j<TALLA;j++){
            a[i][j] = 10*i+j;
        }
    }
    
    for(i=0; i<TALLA;i++){
        for(j=0; j<TALLA;j++){
            printf("%d\n", a[i][j]);
        }
    }
    
    return 0;
}