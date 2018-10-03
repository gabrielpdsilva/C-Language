#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float bst, alt, art;
	puts("Digite a base do triângulo");
	scanf("%f",&bst);
	puts("Digite a altura do triângulo");
	scanf("%f",&alt);
	art = (bst * alt) / 2;
	printf("A área do triângulo é %f", art);
	return(0);
}
