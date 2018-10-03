#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float bs, al, ar;
	puts("Digite a base do retângulo");
	scanf("%f", &bs);
	puts("Digite a altura do retângulo");
	scanf("%f", &al);
	ar = bs * al;
	printf("A área do retângulo é %f", ar);
	return(0);
	
}
