/* *http://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Vectores
 * Ejemplo : El producto escalar de dos vectores
 */
#include <stdio.h>
 
double producto_escalar(double v1[], double v2[], int d);
 
int main()
{	
	const int largo = 3;
	double vector_1[] = {5,1,0};
	double vector_2[] = {-1,5,3};
 
	double resultado = producto_escalar(vector_1, vector_2, largo);
 
	// imprime el resultado
	printf("(%f, %f, %f) . (%f, %f, %f) = %f\n",
		vector_1[0], vector_1[1], vector_1[2],
		vector_2[0], vector_2[1], vector_2[2],
		resultado);
	return 0;
}
 
/* producto escalar entre dos vectores */
double producto_escalar(double v1[], double v2[], int d)
{
	double resultado = 0;
	int i;
	for (i=0; i < d; i++) {
		resultado += v1[i] * v2[i];
	}
	return resultado;
}