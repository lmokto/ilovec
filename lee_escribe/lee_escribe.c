#include <stdio.h>

//define funcion main principal
int main(void){
    int a;
    float b;
    //imprime
    printf("Introduce un entero a: ");
    //toma valor
    scanf("%d", &a);
    //imprime
    printf("Y ahora un flotante b: ");
    //toma valor
    scanf("%f", &b);
    //imprime
    printf("el valor de a es %d y el valor de b es %f\n", a, b);
    //siempre retorna 0
    return 0;    
}