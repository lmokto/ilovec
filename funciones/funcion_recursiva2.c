/*
 * producto.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
int producto(int a, int b){
	if (b == 0) /* caso base */
		return 0; /* como b = 0, se retorna 0*/
	else
		return a + producto(a, b - 1); /* llamada a esta misma función */
}
 
int main(void){
	/* en este caso se llama a la función y se imprime directamente*/
	printf("%i ", producto( 7, 3));
 
	return 0;
}