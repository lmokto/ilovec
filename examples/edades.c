#include <stdio.h>
#include <math.h>

#define PERSONAS 15

int main(void){
    
    int edad[PERSONAS], i, j, aux, suma_edad;
    float suma_desviacion, media, desviacion;
    int moda, frecuencia, frecuencia_moda;
    
    /*Lectura de edades*/
    for(i=0; i<PERSONAS;i++){
        printf("Por favor, introduce edad de la persona numero %d: ", i+1);
        scanf("%d", &edad[i]);
    }
    
    /*Calculo de la media*/
    suma_edad = 0;
    for(i=0; i<PERSONAS; i++){
        suma_edad += edad[i];
    }
    media = suma_edad / (float) PERSONAS;
    /*Calculo de la desviacion tipica*/
    suma_desviacion = 0.0;
    for(i = 0; i<PERSONAS; i++){
        suma_desviacion += (edad[i] - media) * (edad[i]-media);
    }
    desviacion = sqrt(suma_desviacion / PERSONAS );
    
    /*Calculo de la moda*/
    for(i=0; i<PERSONAS-1; i++){ //ORDENACION MEDIANTE BURBUJA
        for(j=0;j<PERSONAS-i;j++){
            if(edad[j]>edad[j+1]){
                aux=edad[j];
                edad[j]=edad[j+1];
                edad[j+1]=aux;
            }
        }
    }
    
    frecuencia = 0;
    frecuencia_moda = 0;
    moda = -1;
    
    for(i=0; i<PERSONAS-1; i++){
        if(edad[i] == edad[i+1]){
            frecuencia++;
            if(frecuencia > frecuencia_moda){
                frecuencia_moda = frecuencia;
                moda = edad[i];
            }
        } else {
            frecuencia = 0;
        }
    }
    
    /*Impresion de resultados */
    printf("Edad media : %f\n", media);
    printf("Desv. tipica: %f\n", desviacion);
    printf("Moda : %f\n", moda);
    
    return 0;    
}