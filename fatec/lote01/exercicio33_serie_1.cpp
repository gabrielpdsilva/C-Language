#include <stdio.h>

//Receba um número. Calcule e mostre a série 1 + 1/2 + 1/3 + ... + 1/N.

int main()
{
int num;
float i, soma, j, divisao;
i = 1;
soma = 0;
do{
    puts("digite um valor");
    scanf("%d",&num);
}while(num<=0);
printf("1 ");

for(j=1;j<=num;j++){
    printf("%.0f / %.0f", i, j);
    divisao = i/j;
    soma +=divisao;
    
}
soma+=1;
//printf("%.2f | ",  divisao);
printf("Soma dos valores: %.2f",  soma);

return 0;
}

