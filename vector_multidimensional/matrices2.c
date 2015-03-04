#include <stdio.h>

#define MAXTALLA 10

int main(void){
    
    float a[MAXTALLA][MAXTALLA], b[MAXTALLA][MAXTALLA];
    float s[MAXTALLA][MAXTALLA], p[MAXTALLA][MAXTALLA];
    
    int filas_a, columnas_a, filas_b, columnas_b;
    int filas_s, columnas_s, filas_p, columnas_p;
    int i, j, k;
    
    /*Lectura de la matriz a*/
    printf("filas de a  : ");
    scanf("%d", &filas_a);
    printf("Columnas de a: ");
    scanf("%d", &columnas_a);
    
    for(i=0;i<filas_a;i++){
        for(j=0;j<columnas_a;j++){
            printf("Elementos (%d, %d): ", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    
    /*Lectura de la matriz b*/
    printf("Filas de a : ");
    scanf("%d", &filas_b);
    printf("Columnas de a: ");
    scanf("%d", &columnas_b);
    for(i=0;i<filas_b;i++){
        for(j=0;j<columnas_b;j++){
            printf("Eelementos (%d, %d)", i, j);
            scanf("%f", &b[i][j]); 
        }
    }
    
    /*Calculo de la suma*/
    if(filas_a == filas_b && columnas_a == columnas_b){
        filas_s = filas_a;
        columnas_s = columnas_a;
        for(i=0;i<filas_s;i++){
            for(j=0;j<filas_a;j++){
                s[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    
    /*Calculo del producto*/
    if(columnas_a == filas_b){
        filas_p = filas_a;
        columnas_p = columnas_b;
        for(i=0;i<filas_p;i++){
            for(j=0;j<columnas_p;j++){
                p[i][j] = 0.0;
                for(k=0;k<columnas_a;k++){
                    p[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
    
    /*impresion del resultado de la suma*/
    if(filas_a == filas_b && columnas_a == columnas_b){
        printf("Suma\n");
        for(i=0;i<filas_s;i++){
            for(j=0;j<columnas_s;j++){
                printf("%8.3f", s[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrices no compatibles para la suma\n");
    }
    
    /*Impresion del resultado del producto*/
    if(columnas_a == filas_b){
        printf("Producto\n");
        for(i=0;i<filas_p;i++){
            for(j=0;j<columnas_p;j++){
                printf("%8.3f", p[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrices no compatible par el producto\n");
    }
    
    return 0;
}