/*
 * elalfabeto.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
void funcionA(char c); /* se declara el prototipo de la función para que el llamado */
void funcionB(char c); /* a la misma en la función no sea implícita */
 
int main(void)
{
 
	funcionA('z'); /* llamado a funcionA */
 
	return 0;
}
 
void funcionA(char c)
{
	if (c > 'a') /* caso base mientras c no sea menor que A */
		funcionB(c); /* llamado a la funcionB */
 
	printf("%c ", c); /* imprimimos el valor de c */
*la variable es un parametro no utilizado para este proceso
}
 
void funcionB(char c)
{
	funcionA(--c); /* llamado a la funcionA decrementando el valor de 'z' */
