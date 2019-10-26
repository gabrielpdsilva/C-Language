#include <stdio.h>

//Criar e coletar um vetor [100] inteiro e exibir:
//a. O maior e o menor valor;
//b. A média dos valores.


int main()
{
    int vetor[4], i, maior, menor;
    float media;
    
    maior = 0;
    menor = 10000;
    
    for(i=0; i<4; i++){
        puts("Digite um valor.");
        scanf("%d", &vetor[i]);
        media+=vetor[i];
    }
    
    for(i=0; i<=4; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }else if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    
    media = media / 4;
    printf("media: %.2f, maior: %d, menor: %d\n", media, maior, menor);
    

    return 0;
}
