int matriz[3][7];
int tabla[3][4]={ { 1, 2, 3, 4},
		  { 5, 6, 7, 8}, /* los espacios y saltos de líneas no son tomados en cuenta */
		  { 9,10,11,12} };
double v[2][2][2];
...
printf("tabla[0][1]: %i\n", tabla[0][3]); // Imprime 4
printf("tabla[2][0]: %i\n", tabla[2][0]); // Imprime 9 
...