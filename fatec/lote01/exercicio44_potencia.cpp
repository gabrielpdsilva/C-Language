#include <stdio.h>

//Receba o número da base e do expoente. Calcule e mostre o valor da potência.

int main()
{
int i, base, expoente, potencia;

do{
    puts("digite um valor");
    scanf("%d",&base);
    puts("digite um valor");
    scanf("%d",&expoente);
    
}while(base<=0 || expoente<=0);
potencia = 1;
for(i = 1; i<=expoente; i++){
    potencia = (potencia*base);
}
printf("Potência: %d",  potencia);

return 0;
}
