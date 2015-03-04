#include <stdio.h>

int main(void){
    int a;
    
    printf("Introduce un entero a: ");
    scanf("%d", &a);
    
    //sentencia while al igual que python pero incluye en condicion parentecis
    while(a>0){
        printf("%d\n", a);
        a-=1;
    }
    printf("BOOM!!!\n");
    
    return 0;
}