#include <stdio.h>

#define TALLA_A 10
#define TALLA_B 10

int main(void){
    int x, i, a[TALLA_A], b[TALLA_B];
    
    for(i = 0; i < TALLA_A; i++){
        a[i] = 0;
    }
    
    for(x = 0; x < TALLA_B; x++){
        b[x] = 0;
    }
    
    for(i = 0; i<TALLA_A; i++){
        printf("%d\n", a[i]);
    }
    
    for(x = 0; x<TALLA_B; x++){
        printf("%d\n", b[x]);
    }
    
    return 0;
}