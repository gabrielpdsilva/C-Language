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
		printf("A diferen�a entre %d e %d � %d.", a, b, c);
	}else{
		c = b - a;
		printf("A diferen�a entre %d e %d � %d.", a, b, c);
	}
	return(0);
}
