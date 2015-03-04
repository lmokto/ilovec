#include <stdio.h>

#define N 100

int main(void){
    int criba[N], i, j;
    
    /* Inicializacion */
    criba[0] = 0;
    for (i=0; i<N; i++){
        criba[i] = 1;
    }
    
    /* Criba de Eratostenes */
    for (i=2; i<N; i++){
        if(criba[i]){
            for(j=2;i*j<N;j++){
                criba[i*j] = 0;
            }
        }
    }
    
    /* Mostrar los resultados */
    for(i=0;i<N;i++){
        if(criba[i]){
            printf("%d\n", i);
        }
    }
    
    return 0;
}