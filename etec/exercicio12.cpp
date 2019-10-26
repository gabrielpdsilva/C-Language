#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float seg, hr, min;
	puts("Digite um valor em segundos.");
	scanf("%f", &seg);
	min = seg / 60;
	hr = min / 60;
	printf("Os segundos informados corresponde à %.2f minuto(s).\n", min);
	printf("Os segundos informados corresponde à %.2f hora(s).", hr);
	return(0);
}
