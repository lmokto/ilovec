/*
 * iterativo.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
long factorial(int numero);
 
int main(int argc, char** argv)
{
	int contador = 0;
 
	/* calcula el factorial de 0 a 10 */
	for ( contador = 0; contador <= 10; contador++ )
		printf("%d! = %ld\n", contador, factorial( contador ));
 
	return 0;
}
 
/* funcion factorial iterativa */
long factorial( int numero )
{
	long resultado = 1;
	int i = 0;
 
	/* declaracion de la función factorial iterativa */
	for ( i = numero; i >= 1; i-- )
		resultado *= i;
 
	return resultado;
}