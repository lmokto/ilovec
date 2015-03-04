#include <stdio.h>
#include <string.h>

/*
 largo = strlen(cadena)  Para obtener el largo de una cadena
strcpy(destino, origen)  Copia el contenido de origen en destino
                         destino debe ser lo suficientemente grande
strcat(destino, origen)  Agrega el contenido de origen al final de destino
                         destino debe ser lo suficientemente grander
resultado = strcmp(cadena1, cadena2) // Compara dos cadenas
             devuelve un valor menor, igual o mayor que 0 según si cadena1 es menor,
             igual o mayor que cadena2, respectivamente. 
posicion = strchr(cadena, caracter) // Devuelve la posición en memoria de la primer
             aparición de caracter dentro de cadena
posicion = strstr(cadena,subcadena) // Devuelve la posición en memoria de la primer 
             aparición de subcadena dentro de cadena
 */
void intercambiar(char vector[], int pos1, int pos2);

int main(void){

    char color[] = "rojo";
    char grosor[] = "grueso";
    
    char descripcion[1024];
 
    strcpy(descripcion, "Lapiz color ");
    strncat(descripcion, color, 1024);
    strncat(descripcion, " de trazo ", 1024);
    strncat(descripcion, grosor, 1024);
    // descripcion contiene "Lapiz color rojo de trazo grueso"

    return 0;
}


void invierte_cadena(char cadena[]){
    int largo = strlen(cadena);
    for (int i=0; i < (largo/2); i++) {
            intercambiar(cadena, i, (largo-1)-i);
    }
}

void intercambiar(char vector[], int pos1, int pos2){
    char aux=vector[pos1];
    vector[pos1]=vector[pos2];
    vector[pos2]=aux;
}