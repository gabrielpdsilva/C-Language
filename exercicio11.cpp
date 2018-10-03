#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float cm, mt, dc, mm;
	puts("Digite uma medida em centímetros.");
	scanf("%f", &cm);
	mt = cm / 100;
	dc = cm / 10;
	mm = cm*10;
	printf("Há %.2f metros na medida informada.\n", mt);
	printf("Há %.2f decímetros na medida informada.\n", dc);
	printf("Há %.2f milímetros na medida informada.", mm);
	return(0);
}
