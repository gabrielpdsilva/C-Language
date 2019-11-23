#include <stdio.h>

int main(){
    
    int matriz[8][8];
    int i, j, valor = 1;
    
    for(i =  0; i < 8; i++){
        for(j = 0; j < 8; j++){
            matriz[i][j] = 1;
        }
    }
    
    for(i =  0; i < 8; i++){
        for(j = 0; j < 8; j++){
            matriz[i][j] = valor;
            valor *= 2;
        }
    }
    
    for(i = 0; i < 8; i++){
        for(j = 0; j < 8; j++){
            printf("%d\t", matriz[i][j]);
        }
        puts("\n");
    }
}
