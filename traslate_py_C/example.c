#include <stdio.h>

int main(void){
    int a, b;
    
    printf("Dame el primer numero a: ");
    scanf("%d", &a);
    printf("Dame el primer numero b: ");
    scanf("%d", &b);
    
    if (a>b){
        printf("el maximo es %d ", a);
    } else {
        printf("el maximo es %d ", b);
    }
    
    return 0;
}