#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o número que você escolheu.");
	scanf("%d", &a);
	if(a % 2 == 0){
		puts("O número é par!");
	}else{
		puts("O número é ímpar!");
	}
	return(0);
}
