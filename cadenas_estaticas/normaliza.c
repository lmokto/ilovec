#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLON 80

int main(void){
    char a[MAXLON+1], b[MAXLON+1];
    int longitud, i, j;
    
    printf("Introduce una cadena (max %d cars): ", MAXLON);
    gets(a);
    longitud = strlen(a);
    b[0] = a[0];
    j = 1;
    for(i=1; i<longitud;i++){
        if((!isspace(a[i]) || (isspace(a[i]) && !isspace(a[i-1])))){
            b[j++]=a[i];
        }
    }
    b[j]='\0';
    
    printf("La cadena normalizada es %s\n", b);
    
    
    return 0;
}