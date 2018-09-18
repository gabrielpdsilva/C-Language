#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float a, b;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o primeiro número.");
	scanf("%f", &a);
	puts("Digite o segundo número.");
	scanf("%f", &b);
	if(a+b > 25){
		puts("A soma dos dois números é maior que 25.");
	}else{
		puts("A soma dos dois números NÃO é maior que 25.");
	}
	return(0);
}
