#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, vol;
	puts("Digite o raio de uma esfera.");
	scanf("f", &r);
	vol = 4/3 * 3,14*(pow(r,3));
	printf("O volume da esfera é %.1f", vol);
	return(0);
}
