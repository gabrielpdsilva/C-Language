#include <stdio.h>

//Criar e coletar em um vetor [20] inteiro (calcular o primeiro com o ultimo, segundo com penultimo...)

int main()
{
    
    int soma, i, j;
//    int vt[10] = {1,2,3,4,5,6,7,8,9,10};
    int vt[20];
    
    for(i = 1; i <=20; i++){
        puts("Digite os valores do vetor.");
        scanf("%d", &vt[i]);
    }
    
    soma = 0;
    for(i=1, j=20; i<=20,j>0; i++, j--)
    {
        printf("i: %d, j: %d\n", vt[i], vt[j]);
        soma += vt[i] + vt[j];
        printf("soma: %d\n", soma);
    }
    return 0;
}
