#include <stdio.h>

int main(){
  int matriz[4][3];
  int i, j, total_produtos_vendidos = 0;
  int produtos_vendidos_semana[4] = {0, 0, 0, 0};
  int quantidade_vendido_mes[3] = {0, 0, 0};
  for(i = 0; i < 4; i++){
    for(j = 0; j < 3; j++){
        printf("Digite a quantidade da %d semana e do %d produto.\n", i+1, j+1);
        scanf("%d", &matriz[i][j]);
        total_produtos_vendidos += matriz[i][j];
        produtos_vendidos_semana[i] += matriz[i][j];
        quantidade_vendido_mes[j] += matriz[i][j];
    }
  }

  for(i = 0; i < 4; i++){
      if(i > 2){
        printf("Produtos vendido na semana %d: %d\n", i+1, produtos_vendidos_semana[i]);
      }else{
        printf("Produtos vendido na semana %d: %d\n", i+1, produtos_vendidos_semana[i]);
        printf("Quantidade de produtos vendidos no mes: %d\n", quantidade_vendido_mes[i]);
      }
      
  }
  
  printf("Soma dos produtos: %d\n\n", total_produtos_vendidos);
  
  puts("Tabela completa:");
  for(i = 0; i < 4; i++){
      for(j = 0; j < 3; j++){
          printf("%d\t", matriz[i][j]);
      }
      puts("\n");
  }
}
