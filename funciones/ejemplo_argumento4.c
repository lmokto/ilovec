/*
 * por_referencia.c
 *
 * Julio César Brizuela <brizuelaalvarado@gmail.com> 2009
 *
 * para el wikilibro "Programación en C"
 * bajo licencia FDL, adaptado del Dominio Público
 */
 
#include <stdio.h>
 
void sumar_referencia(int *numero); /* prototipo de la función */
 
 
int main(void)
{
	int numero = 57; /* definimos numero con valor de 57*/
 
	sumar_referencia(&numero); /* enviamos numero a la función */
 
	printf("\nValor de numero dentro de main() es: %d ", numero);
	/* podemos notar que el valor de numero se modifica
	 * y que ahora dentro de main() también se ha modificado
	 * aunque la función no haya retornado ningún valor.
	 */
 
	return 0;
}
 
void sumar_referencia(int *numero)
{
	*numero += 1; /* le sumamos 1 al numero */
 
	/* el valor de numero recibido se aumenta en 1
	 * y se modifica dentro de la función
	 */
	printf("\nValor de numero dentro sumar_referencia() es: %d", *numero);
 
	return;
}