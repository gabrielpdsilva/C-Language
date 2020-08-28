#include <stdio.h>

int main()
{
    int pecas[3][3];
    int qtd_pecas[7] = {0, 0, 0, 0, 0, 0, 0};
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            do{
                scanf("%d", &pecas[i][j]);
            }while(pecas[i][j] < 0 || pecas[i][j] > 6);
            
            qtd_pecas[pecas[i][j]]++;
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", pecas[i][j]);
        }
        puts("\n");
    }
    
    for(i = 0; i < 7; i++){
        printf("codigo [%d]: %d\n", i, qtd_pecas[i]);   
    }

    return 0;
}
