/*
 * global.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
int variable_global = 99; /* inicializamos la variable global */
 
void funcion(); //prototipo de la funcion
 
int main(void)
{
	/* imprimimos el valor*/
	printf("main(), acceso a variable_global %d\n", variable_global);
 
	/* llamamos a la función */
	funcion();
 
	return 0;
}
 
void funcion()
{
	/* imprimimos el valor*/
	printf("funcion(), acceso a variable_global %d\n", variable_global);
 
	return;
}