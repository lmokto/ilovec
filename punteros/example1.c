#include <stdio.h>

/*
 Ya anteriormente te poniamos algunos ejemplos de como asignar la dirección de memoria a un puntero y de como acceder al valor de este.

Operador de Dirección (&): Este nos permite acceder a la direccion de memoria de una variable.

Operador de Indireccion (*): Ademas de que nos permite declarar un tipo de dato puntero, también nos permite ver el VALOR que esta en la dirección asignada.

Incrementos (++) y Decrementos (--): Te daras cuenta que puedes usar un puntero como si de un array se tratase, es por esto que permite estos operadores.

De lo anterior podemos decir que:

int a; Es Igual int *puntero=&a; printf("%d",a); Es Igual printf("%d",*puntero);
 */
int main(void){
    int a=0;
    int *puntero;
    puntero = &a;
    
    printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*    puntero);
    printf("La direccion de memoria de *puntero es: %p",puntero);
 
    return 0;
}