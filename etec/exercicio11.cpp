#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float cm, mt, dc, mm;
	puts("Digite uma medida em cent�metros.");
	scanf("%f", &cm);
	mt = cm / 100;
	dc = cm / 10;
	mm = cm*10;
	printf("H� %.2f metros na medida informada.\n", mt);
	printf("H� %.2f dec�metros na medida informada.\n", dc);
	printf("H� %.2f mil�metros na medida informada.", mm);
	return(0);
}
