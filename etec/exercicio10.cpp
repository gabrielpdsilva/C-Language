#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float vh, ht, bn, nd, sb, sl;
	bn = 300;
	puts("Digite o valor da hora");
	scanf("%f", &vh);
	puts("Digite a quantidade de horas trabalhadas no mês");
	scanf("%f", &ht);
	puts("Digite o número de dependentes");
	scanf("%f", &nd);
	sb = vh * ht;
	sl = sb + (bn * nd);
	printf("Seu salário bruto é %f, e o salário líquido é %f", sb, sl);
	return(0);
}
