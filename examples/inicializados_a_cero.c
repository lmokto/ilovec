#include <stdio.h>

#define TALLA 10

int main(void){
    int i, a[TALLA] = {1, 2, 3, 4, 5};
    
    for(i=0; i<TALLA; i++){
        a[i] = 0;
    }
    
    for (i=0; i<TALLA; i++){
        printf("%d\n", a[i]);
    }
    
    return 0;
}