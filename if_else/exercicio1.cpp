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
	printf("Sua nota final � %.2f, voc� foi aprovado!", nf);
	}else{
		printf("Sua nota final � %.2f, voc� n�o foi aprovado, estude mais da pr�xima vez!", nf);
	}
	return(0);
}
