#include <stdio.h>
#include <math.h>

int main(void){
    int a, b, i;
    float s;
    
    /*Pedir limites inferior y superior.*/
    do{
        printf("Limite inferior:");
        scanf("%d", &a);
        if (a<0){
            printf("No puede ser negativo\n");
        }
    } while (a<0);
    
    do {
        printf("limite superior:");
        scanf("%d", &b);
        if(b<a){
            printf("No puede ser menor que %d\n", a);
        }
    }  while (b<a);
    
    /*Calcular el sumatorio de la raiz cuadrada de i para i entre a y b */
    
    s = 0.0;
    
    for (i=a;i<=b;i++){
        s += sqrt(i);
    }
    
    //mostrar resultado
    
    printf("Sumatorio de raices de %d a %d: %f\n", a, b, s);
    
    return 0;
}