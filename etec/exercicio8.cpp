#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int an, aa, ida, id2050;
	aa = 2018;
	puts("Digite o ano em que voc� nasceu");
	scanf("%d", &an);
	ida = aa - an;
	id2050 = 2050 - an;
	printf("Sua idade atual � %d anos. \n", ida);
	printf("Sua idade em 2050 ser� %d anos.", id2050);
	return(0);
}
