#include <stdio.h>

int main(void){
    int n, i, r;
    
    n = 1;
    while(n<6){
        i=1;
        while(i<6){
            r = n*i;
            printf("%d\n", r);
            i=i+1;
            printf("\n");
        }
        n=n+1;
    }
    
    return 0;
}