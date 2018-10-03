#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, del, x1, x2;
	puts("=====Equação do segundo grau.=====\nDigite um valor para A.");
	scanf("%f", &a);
	puts("Digite o valor de B.");
	scanf("%f", &b);
	puts("Digite o valor de C.");
	scanf("%f", &c);
	del = (pow(b,2)) - (4*a*c);
	x1 = (-b+(sqrt(del)))/2*a;
	x2 = (-b-(sqrt(del)))/2*a;
	printf("O valor de delta é %.1f, o valor de x1 é %.1f e o valor de x2 é %.1f.", del, x1, x2);
	return(0);
}
