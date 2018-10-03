#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float x, n, res, resf;
	puts("Digite um valor para X");
	scanf("%f", &x);
	puts("Digite um valor para N");
	scanf("%f", &n);
	res = pow((x*n), 2);
	printf("O resultado do cálculo de (%.1f * %.1f)² é %.1f", x, n, res);
	return(0);
}
