#include <stdio.h>
#include <string.h>

#define MAXLON 80

int main(void){
    char a[MAXLON+1];
    int i, contador;
    
    printf("Introduce una cadena (max %d cars): ", MAXLON);
    gets(a);
    contador = 0;
    for (i=0; i<strlen(a);i++){
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
            contador++;
        }
    }
    printf("vocales minusculas: %d\n", contador);
    return 0;
}