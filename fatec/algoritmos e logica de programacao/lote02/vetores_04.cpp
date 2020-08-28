#include <stdio.h>

//Criar e coletar em um vetor [30] real e calcular e exibir:
//a. A média do grupo;
//b. A quantidade de notas acima do grupo;
//c. As posições dos valores abaixo da média do grupo.


int main()
{
    float vetor[30];
    float media;
    int qtd=0;
    int i;
    
    for(i = 1; i<=30;i++){
        puts("Digite um valor");
        scanf("%f", &vetor[i]);
        
        media+=vetor[i];
        
    }
    media=(media/30);
    printf("media: %.2f\n", media);
    
    for(i = 1; i<=30;i++){
        if(vetor[i]>media){
            qtd++;
            printf("acima da média: %.0f\n", vetor[i]);
            
        } 
        else if(vetor[i]<media){
            //posição do pessoal abaixo da média
            printf("abaixo da média: %d\n", i);
        }
    }
    
printf("quantidade acima da média: %d", qtd);
    
    return 0;
}
