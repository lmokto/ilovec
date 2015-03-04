#define MAXLON 10

int main(void){
    
    char original[MAXLON+1] = "cadena";
    char copia[MAXLON+1];
    int i;
    
    for (i=0; original[i] != '\0';i++){
        copia[i] = original[i];
    }
    copia[i] = '\0';
    
    return 0;
}