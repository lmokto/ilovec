#include <stdio.h>

int main(void){
    int a;
    
    printf("introduce un numero entero: ");
    scanf("%d", &a);
    
    //sentencias if and else identicas a python y javascript
    
    if(a % 2 == 0){
        printf("el valor de a es par\n");
    } else {
        printf("el valor de a es impar\n");
    }
    
    return 0;
}