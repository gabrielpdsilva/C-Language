#include <stdio.h>

//Receba 100 n�meros inteiros reais. Verifique e mostre o maior e o menor valor. Obs.: somente valores positivos.

int main()
{
    int maior = 0, menor = 0, valor;
    
    puts("Digite um valor.");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;
    
    for(int i = 0; i < 100; i++){
        puts("Digite um valor.");
        scanf("%d", &valor);
        if(valor > maior){
            maior = valor;
        }else if(valor < menor){
            menor = valor;
        }
    }
    
    printf("Maior n�mero digito: %d\n", maior);
    printf("Menor n�mero digito: %d\n", menor);
    
    return 0;
}
