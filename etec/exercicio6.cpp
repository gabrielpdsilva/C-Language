#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float bs, al, ar;
	puts("Digite a base do ret�ngulo");
	scanf("%f", &bs);
	puts("Digite a altura do ret�ngulo");
	scanf("%f", &al);
	ar = bs * al;
	printf("A �rea do ret�ngulo � %f", ar);
	return(0);
	
}
