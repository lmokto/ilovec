#define TALLA 3

int main(void){
    int original[TALLA] = {1, 2, 3};
    int copia[TALLA] = {1, 1+1, 3};
    int i, son_iguales;
    
    son_iguales = 1; //Suponemos que todos los elementos son iguales dos a dos.
    i = 0;
    while (i<TALLA && son_iguales){
        if(copia[i] != original[i]){ //Pero basta con que dos elementos no sean iguales...
            son_iguales = 0;
        }
        i++;
    }
    if(son_iguales){
        printf("Son iguales\n");
    } else{
        printf("No son iguales \n");
    }
    
    return 0;
}