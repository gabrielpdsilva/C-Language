#include <stdio.h>

//Exercício 1 - Criar e coletar um vetor [50] inteiro. Calcular e exibir:
//a. A média dos valores entre 10 e 200;
//b. A soma dos números ímpares.


int main()
{
    int vetor[3];
    float media = 0;
    int soma, i;
    int cont = 0;
    soma = 0;
    
    for(i = 0; i<4;i++){
        puts("Digite um valor");
        scanf("%d", &vetor[i]);
        
        if(vetor[i] >= 10 && vetor[i] <= 200){
        media += vetor[i];
        cont++;
        printf("cont: %d\nmedia: %f\n", cont, media);
        }
        
        if(vetor[i] % 2 != 0){
        soma += vetor[i];
        printf("soma: %d", soma);
        }
        
    }
    
    
    
    media = media / cont;
    
    
    
    printf("\nMédia entre 10 e 200: %.2f\n", media);
    printf("\nSoma dos ímpares: %d\n", soma);
        
    
    

    return 0;
}
