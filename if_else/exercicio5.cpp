#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int a, b, c;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o primeiro valor.");
	scanf("%d", &a);
	puts("Digite o segundo valor.");
	scanf("%d", &b);
	if(a>b){
		c = a - b;
		printf("A diferença entre %d e %d é %d.", a, b, c);
	}else{
		c = b - a;
		printf("A diferença entre %d e %d é %d.", a, b, c);
	}
	return(0);
}
