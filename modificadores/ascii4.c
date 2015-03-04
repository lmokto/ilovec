#include <stdio.h>

int main(void){
    int i;
    for(i='A';i<='Z';i++){
        printf("%d-%c", i, i);
        printf("\n");
    } 
    return 0;
}