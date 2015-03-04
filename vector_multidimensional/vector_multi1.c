int main(void){
    
    int a[10][5];
    float b[3][2][4];
    int i, j, k;
    
    //recorrido del vector a[10][5]
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            a[i][j] = 0;
        }
    }
    //recorrido del vector b[3][2][4]
    for(i=0; i<3;i++){
        for(j=0;j<2;j++){
            for(k=0;k<4;k++){
                b[i][j][k] = 0.0;
            }
        }
    }
    
    return 0;
}