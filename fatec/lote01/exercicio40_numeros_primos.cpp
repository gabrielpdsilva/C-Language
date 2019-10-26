#include <stdio.h>

//Receba 2 números inteiros. Verifique e mostre todos os números primos existentes entre eles.

int main()
{
    do{
        printf("Insira o primeiro valor:");
        scanf("%d", &num1);
        
        printf("Insira o segundo valor:");
        scanf("%d", &num2);
    }while(num1<=0 || num2 <=0);
    
    for(num1;num1<num2;num1++){
        for(int j = 2; j<=num;j++){
            if(num1 % j == 0 && j!=num1) break;
            else if(j==num1){
                printf("%d eh um numero primo\n", j);
            }
        }
    }
    return 0;
}
