#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int id, an, aa;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite o ano em que você nasceu.");
	scanf("%d", &an);
	puts("Digite o ano atual.");
	scanf("%d", &aa);
	id = aa - an;
	if(id>=18){
		puts("Você já é maior de idade! :)");
	}else{
		puts("Você não é maior de idade ainda! :(");
	}
	system("PAUSE");
	return(0);
}
