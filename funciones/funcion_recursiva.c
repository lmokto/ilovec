/*
 *factorial.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
long factorial(int n){
    if (n == 0) /* caso base */
            return 1; /* como 0! = 1, se retorna 1*/
    else
	return n * factorial (n - 1); /* llamada a esta misma función */
}
 
int main(void){
    /* en este caso se llama a la función y se imprime directamente*/
    printf("%ld ", factorial(5));
    return 0;
}