#include <stdio.h>
//<stdio.h>. Gracias a ella hemos importado las funciones de entrada/salida scanf y printf .


int main(void){
    int a;
    int b;
    
    printf("Introduce un entero a: ");
    scanf("%d", &a);
    
    b=2;
    while(b < a){
        //si es primo, corta el bucle, sino busca hasta encontrar un numero primo...
        if( a%b == 0){
            break;
        }
        b+=1;
    }
    
    if (b==a){
        printf("%d es primo.\n", a);
    } else {
        printf("%d no es primo\n", a);
    }

    return 0;
}