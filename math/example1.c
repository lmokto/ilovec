//gcc example1.c -o example -lm
//http://stackoverflow.com/questions/10409032/why-im-getting-undefined-reference-to-sqrt-error-even-though-i-include-ma

#include <stdio.h>
#include <math.h>

int main(void){
    float b;
    
    printf("Escribe un flotante: ");
    scanf("%f", &b);
    
    if(b>=0.0){
        printf("Su raiz cuadrada es %f.\n", sqrt(b) );
    } else {
        printf("No puedo calcular su raiz cuadrada.\n");
    }
    
    return 0;
}