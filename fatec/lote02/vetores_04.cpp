#include <stdio.h>

//Criar e coletar em um vetor [30] real e calcular e exibir:
//a. A m�dia do grupo;
//b. A quantidade de notas acima do grupo;
//c. As posi��es dos valores abaixo da m�dia do grupo.


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
            printf("acima da m�dia: %.0f\n", vetor[i]);
            
        } 
        else if(vetor[i]<media){
            //posi��o do pessoal abaixo da m�dia
            printf("abaixo da m�dia: %d\n", i);
        }
    }
    
printf("quantidade acima da m�dia: %d", qtd);
    
    return 0;
}
