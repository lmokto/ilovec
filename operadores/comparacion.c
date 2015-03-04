/*
 Los operadores && ("y"), || ("o") y ! ("no") son operadores lógicos. Permiten operar con expresiones lógicas para generar expresiones más complejas.
Por ejemplo: determinar si un año es bisiesto o no. Los años son bisiestos si son divisibles por 4, pero no si son divisibles por 100, a menos que también sean divisibles por 400.
 
 */

if ( (!(a % 4) && ((a % 100))) || !(a % 400) )  {
		printf("es un año bisiesto.\n");
	} else {
		printf("no es un año bisiesto.\n");
	}

/*
 
 
 */

if ( !(a % 4) && (a % 100) || !(a % 400) )  {
		printf("es un año bisiesto.\n");
	} else {
		printf("no es un año bisiesto.\n");
	}

/*

*/

if ( !(a % 4) && (a % 100) || !(a % 400) )  
		printf("es un año bisiesto.\n");
	else 
		printf("no es un año bisiesto.\n");