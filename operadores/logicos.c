/*
 Operador	Significado
 
    <	        estrictamente menor que
    >   	estrictamente mayor que
    <=	        menor o igual que
    >=  	mayor o igual que
    ==  	igual a
    !=  	distinto de
 
 */

float division(int dividendo, int divisor)
{
	if (divisor) {
		return dividendo / divisor;
	} else {
		printf ("No se puede dividir por cero\n");
		return 0;
	}
}