#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float a, b, c, del, x1, x2;
	puts("=====Equa��o do segundo grau.=====\nDigite um valor para A.");
	scanf("%f", &a);
	puts("Digite o valor de B.");
	scanf("%f", &b);
	puts("Digite o valor de C.");
	scanf("%f", &c);
	del = (pow(b,2)) - (4*a*c);

	if(del >= 0){
		x1 = (-b+(sqrt(del)))/2*a;
		x2 = (-b-(sqrt(del)))/2*a;
		printf("O valor de delta � %.1f, o valor de x1 � %.1f e o valor de x2 � %.1f.", del, x1, x2);
	}else{
		printf("Delta < 0, n�o � poss�vel continuar a conta.");
	}
	return(0);
}
