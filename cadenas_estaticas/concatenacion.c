#include <stdio.h>
#include <string.h>

#define MAXLON 80

int main(void){
    char a[MAXLON+1], b[MAXLON+1];
    int longa, longab;
    int i;
    
    printf("Introduce un texto (max %d cars.): ", MAXLON);
    gets(a);
    
    printf("Introduce otro texto (max %d cars.): ", MAXLON);
    gets(b);
    
    longa =strlen(a);
    longab =strlen(b);
    
    for (i = 0; i<longab;i++){
        a[longa+i] = b[i];
    }
    a[longa+longab] = '\0';
    printf("Concatenacion de ambos: %s", a);
    
    return 0;
}