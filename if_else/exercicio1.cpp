#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	float n1, n2, n3, n4, nf;
	setlocale(LC_ALL, "Portuguese");
	puts("Digite a sua primeira nota.");
	scanf("%f", &n1);
	puts("Digite a sua segunda nota.");
	scanf("%f", &n2);
	puts("Digite a sua terceira nota.");
	scanf("%f", &n3);
	puts("Digite a sua quarta nota.");
	scanf("%f", &n4);
	nf = (n1+n2+n3+n4)/4;
	if(nf >= 7){
	printf("Sua nota final é %.2f, você foi aprovado!", nf);
	}else{
		printf("Sua nota final é %.2f, você não foi aprovado, estude mais da próxima vez!", nf);
	}
	return(0);
}
