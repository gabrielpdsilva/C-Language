#include <stdio.h>

int main(){
  int matriz[4][4];
  int i, j, n = 1;
  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      if(i == j){
        matriz[i][j] = n;
        n *= 4;
      }else{
        printf("Digite o valor da linha %d e coluna %d.\n", i, j);
        scanf("%d", &matriz[i][j]);
      }
      
    }
  }

  for(i = 0; i < 4; i++){
    for(j = 0; j < 4; j++){
      printf("%d\t", matriz[i][j]);
    }
    puts("\n");
  }
}
