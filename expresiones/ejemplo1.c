#include <stdio.h>
 
int main(void)
{
    int resultado;
 
    resultado=5+2;
    printf("Resultado de la suma: %i\n",resultado);
    resultado=5-2;
    printf("Resultado de la resta: %i\n",resultado);
    resultado=5*2;
    printf("Resultado de la multiplicación: %i\n",resultado);
    resultado=5/2;
    printf("Resultado de la división: %i\n",resultado);
    return(0);
}

/*


Operadores	Precedencia
(SE EJECUTA DESDE ...  ASIA)

* /	Izq. a Der.
+ -	Izq. a Der.
=	Der. a Izq.

*/