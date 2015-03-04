// constante
//  #define VARIBLE valor

#include <stdio.h>

int main(void){
    const float pi = 3.14;
    float r, a;
    
    printf("Radio: ");
    scanf("%f", &r);
    
    a = pi * r * r;
    
    printf("Area: %f\n", a);
    
    return 0;
}