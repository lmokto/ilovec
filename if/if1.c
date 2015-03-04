#include <stdio.h>

int main(void){
    int a;
    
    printf("introduce un entero a: ");
    scanf("%d", &a);
    
    if( a % 2 == 0 ){
        printf("El valor de a es par \n");
        printf("Es curioso\n");
    }
    
    return 0;
}