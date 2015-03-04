#define MAXLON 10

int main(void){
    
    char original[MAXLON+1] = "cadena";
    char copia[MAXLON+1];
    int i;
    
    for(i=0; i<=MAXLON;i++){
        copia[i] = original[i];
    }
    
    
    return 0;
}