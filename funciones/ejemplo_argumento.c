#include <stdio.h>
 
int sumar(int numero1, int numero2){
    return numero1 + numero2;
}
 
int main(void){
    int suma = sumar(5, 3);
    printf("La suma es: %d\n ", suma);
    return 0;
}