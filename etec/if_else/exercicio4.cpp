#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float a, b;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o primeiro valor.");
	scanf("%f", &a);
	puts("Digite o segundo valor.");
	scanf("%f", &b);
	if(a>b){
		printf("O maior n�mero � %.1f e o menor n�mero � %.1f", a, b);
	}else{
		printf("O maior n�mero � %.1f e o menor n�mero � %.1f", b, a);
	}
	return(0);
}
