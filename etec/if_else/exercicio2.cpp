#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o n�mero que voc� escolheu.");
	scanf("%d", &a);
	if(a % 2 == 0){
		puts("O n�mero � par!");
	}else{
		puts("O n�mero � �mpar!");
	}
	return(0);
}
