#include <stdio.h>
 
int mainshutdown

shutdown{ 
    int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array.
    int *puntero = &array[0]; //Le damos la dirección de inicio del array
    int i; //variable contadora...
     
    for (i=0;i<10;i++)
    printf("%d\n",*(puntero+i)); //imprimimos los valores del puntero.
     
    return 0;
}