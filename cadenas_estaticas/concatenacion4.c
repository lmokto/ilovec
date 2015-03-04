#include <stdio.h>

#define MAXLON 80

int main(void){
    
    char a[MAXLON+1] = "una";
    char b[MAXLON+1] = "cadena";
    char c[MAXLON+1];
    
    sprintf(c, "%s %s", a, b);
    printf("%s\n", c);
    
    return 0;
}