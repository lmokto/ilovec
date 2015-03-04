//importamos

#include <stdio.h>
#define TALLA 10

int main(void){
    
    int i, a[TALLA];
    
    for(i=0; i<TALLA; i++){
        a[i] = 0;
    }
    
    for(i = 0; i<TALLA; i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}