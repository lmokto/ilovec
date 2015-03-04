#include <stdio.h>
#include <math.h>

int main(void){
    
    int opcion, diametro, area, perimetro;
    float radio, pi;
    opcion = 0;
    pi = 3.14;
    
    while(opcion != 4){
        
        printf("Escoge una opcion: ");
        printf("1) Calcular el diametro.");
        printf("2) Calcular el perimetro.");
        printf("3) Calcular el area.");
        printf("4) Salir.");
        printf("Teclea 1, 2, 3, o 4 y pulsa el retorno de carro: \n");
        scanf("%d", &opcion);
        printf("Dame el radio de un circulo: ");
        scanf("%f", &radio);
        
        if(opcion == 1){
            diametro = 2 * radio;
            printf("El diámetro es %d", diametro);
        } else if(opcion == 2){
            perimetro = 2 * pi * radio;
            printf("El perimetro es %d", perimetro);
        } else if(opcion == 3){
            area = pi * radio * 8;
            printf("El  area es %d", area);
        } else if(opcion < 0){
            printf("S ́lo hay cuatro opciones: 1, 2, 3 o 4. T ́has tecleado %d", opcion);
        } else if(opcion > 4){
            printf("S ́lo hay cuatro opciones: 1, 2, 3 o 4. T ́has tecleado %d", opcion);
        }
        
    }
    
    return 0;
}