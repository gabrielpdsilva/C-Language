#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float vh, ht, bn, nd, sb, sl;
	bn = 300;
	puts("Digite o valor da hora");
	scanf("%f", &vh);
	puts("Digite a quantidade de horas trabalhadas no m�s");
	scanf("%f", &ht);
	puts("Digite o n�mero de dependentes");
	scanf("%f", &nd);
	sb = vh * ht;
	sl = sb + (bn * nd);
	printf("Seu sal�rio bruto � %f, e o sal�rio l�quido � %f", sb, sl);
	return(0);
}
