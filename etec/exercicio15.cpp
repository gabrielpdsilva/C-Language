#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, alt, area;
	puts("Digite o raio de uma lata.");
	scanf("%f", &r);
	puts("Digite a altura de uma lata.");
	scanf("%f", &alt);
	area = 2*(3,14*r*alt);
	printf("A �rea externa de uma lata � %.2f.", area);
	return(0);
}
