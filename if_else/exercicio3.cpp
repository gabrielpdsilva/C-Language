#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float a, b;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o primeiro n�mero.");
	scanf("%f", &a);
	puts("Digite o segundo n�mero.");
	scanf("%f", &b);
	if(a+b > 25){
		puts("A soma dos dois n�meros � maior que 25.");
	}else{
		puts("A soma dos dois n�meros N�O � maior que 25.");
	}
	return(0);
}
