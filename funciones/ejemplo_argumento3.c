/*
 * por_valor.c
 * 
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 * 
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
void sumar_valor(int numero); /* prototipo de la función */
 
int main(void)
{
	int numero = 57; /* definimos numero con valor de 57*/
 
	sumar_valor(numero); /* enviamos numero a la función */
 
	printf("Valor de numero dentro de main() es: %d\n", numero);
	/* podemos notar que el valor de numero se modifica
	 * sólo dentro de la función sumar_valor pero en la principal
	 * número sigue valiendo 57 
	 */
 
	return 0;
}
 
void sumar_valor(int numero)
{
	numero++; /* le sumamos 1 al numero */
 
	/* el valor de número recibido se aumenta en 1
	 * y se modifica dentro de la función sumar_valor()
	 */
	printf("Valor de numero dentro sumar_valor() es: %d\n", numero);
 
	return;
}