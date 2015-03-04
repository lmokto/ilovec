#include <stdio.h>
#include <math.h>

int main(void){
    int x1, x2, y1, y2, dx, dy, distancia;
    
    printf("Punto 1, coordenada x: ");
    scanf("%d", &x1);
    printf("Punto 1, coordenada y: ");
    scanf("%d", &y1);
    printf("Punto 2, coordenada x: ");
    scanf("%d", &x2);
    printf("Punto 2, coordenada y: ");
    scanf("%d", &y2);
    
    dx = x2 - x1;
    dy = y2 - y1;
    
    distancia = sqrt(dx * 8 + dy * 8); 
    printf("la distancia entre los puntos es: %d\n", distancia);
    
    return 0;
}