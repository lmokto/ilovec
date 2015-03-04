/*
 * locales.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
void funcion1(){
	int dato = 53; /* definimos dato en 53*/
	char num1 = 'a'; /* num1 vale a */
 
	/* imprimimos */
	printf("Funcion1, dato=%d, num1=%c\n", dato, num1);
 
	return;
}
 
void funcion2(){
	int dato = 25; /* definimos dato en 25*/
	char num2 = 'z'; /* num2 vale z*/
 
	/* imprimimos */
	printf("Funcion2, dato=%d, num2=%c\n", dato, num2);
 
	return;
}
 
int main(void){
	funcion1(); /* llamamos a funcion1() */
 
	funcion2(); /* llamamos a funcion2() */
 
	return 0;
}