#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float bst, alt, art;
	puts("Digite a base do tri�ngulo");
	scanf("%f",&bst);
	puts("Digite a altura do tri�ngulo");
	scanf("%f",&alt);
	art = (bst * alt) / 2;
	printf("A �rea do tri�ngulo � %f", art);
	return(0);
}
