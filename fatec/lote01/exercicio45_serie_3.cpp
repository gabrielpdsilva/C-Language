#include <stdio.h>

//Calcule e mostre a série 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225

int main()
{
float i, soma, j, divisao, res, diferenca;
printf("1 ");
i=2;
j=4;
soma=0;
diferenca = 5;
    while(i<=15){
        //incompleto... C não permite mod de float
        while(j<=225){
             divisao = i / j;
             if(j%2 ==0){
                 soma-=divisao;
                 printf("- %.0f / %.0f ", i, j);
             }else{
                 soma+=divisao;
                 printf("+ %.0f / %.0f ", i, j);
             }
        
        i++;
        j += diferenca;
        diferenca += 2;
        }
        
        soma+=1;
        res = 1 - soma;   
    }
        printf("\nSoma dos valores: %.2f",  res);
return 0;
}
