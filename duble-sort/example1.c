//http://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Algoritmos_y_Estructuras_de_Datos
//DE MENOR A MAYOR (Ascendente)
#define Nelementos 4

 
int i,j;                //Variables contadoras del ciclo.
int lista[Nelementos]={6,9,3,1}; //Declaracion e inicializacion de un arreglo de 4 elementos.
int temp=0;             //Variable temporal.
 
for (i=1;i<Nelementos;i++)
{
       for (j=0; j <= Nelementos-1 ;j++)
       {
          if (lista[j] > lista[j+1])//Condicion mayor-menor
          {
            temp=lista[j];
            lista[j]=lista[j+1];
            lista[j+1]=temp;
          }
       }
}
//Para cambiar el modo de ordenamiento solo debemos cambiar la condicion < ó >
 
//Gustavo Chavarria
//UNAN-LEON Nicaragua