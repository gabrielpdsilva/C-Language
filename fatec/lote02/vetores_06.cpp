#include <stdio.h>

//Criar e coletar em um vetor [20] com números aleatórios.
//Classificar este vetor em ordem crescente e mostre os dados.

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

    return 0;
}
