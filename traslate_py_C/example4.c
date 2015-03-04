#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, x;
    
    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);
    
    if (a != 0){
        x = -b/a;
        printf("solucion %d\n", x);
    } else if (b != 0){
        printf("La ecuacion no tiene solucion\n");
    } else {
        printf("La ecuacion tiene infinitas soluciones.\n");
    }
    
    return 0;
}