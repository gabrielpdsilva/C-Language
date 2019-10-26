#include <stdio.h>

//Calcule e mostre a série 1 + 2/3 + 3/5 + ... + 50/99

int main()
{
float i, soma, j, divisao;
printf("1 ");
i=2;
j=3;
soma=0;
    while(i<=50){
        
        while(j<=99){
             divisao = i / j;
             printf("divisao: %f", divisao);
        soma+=divisao;
        printf("+ %.0f / %.0f", i, j);
    
            j+=2;
            i++;
        }
        
        soma+=1;
        printf("\nSoma dos valores: %.2f",  soma);
    }
return 0;
}
