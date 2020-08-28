#include <stdbool.h>
#include <stdio.h>
int main()
{

    int i, vt[20], j, auxiliar;
    printf("Valores:\n");
    for(i=1;i<=20;i++){
        scanf("%d", &vt[i]);
    }
    
    for(i=1;i<=20;i++){
        for(j=i+1;j<=20;j++){
            if(vt[i] > vt[j]){
            auxiliar = vt[i];
            vt[i] = vt[j];
            vt[j] = auxiliar;
            }
        }

    }

    for(i=1;i<=20;i++){
        printf("%d\n", vt[i]);
    }

    int inicio = 0, fim = 20, meio, valor;
    bool encontrado = false;

    puts("\nDigite um valor p/ encontrar...");
    scanf("%d", &valor);


    while(inicio <= fim){
      meio = ((inicio + fim)/2);
      printf("inicio: %d\nfim: %d\nmeio: %d\n", inicio, fim, meio);
      if(vt[meio] == valor){
        
        encontrado = true;
        printf("O valor %d foi encontrado na posição %d\n", valor, meio);
        break;
      }

      if(valor > vt[meio]){
        
        inicio = meio + 1;
      }else{
        fim = meio - 1;
      }
    }
    
    if(encontrado == false){
        puts("Valor não encontrado.");
    }
    
    return 0;
  }
