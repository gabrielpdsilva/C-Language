#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int kg, mul;
	setlocale(LC_ALL, "Portuguese");
	puts("Quantos quilos voc� pegou de peixe?");
	scanf("%d", &kg);
	if(kg>50){
		mul = (kg - 50)* 4;
		printf("Sua multa � de R$%d,00.", mul);
	}else{
		printf("Voc� n�o precisa pagar a multa.");
	}
	return(0);
}
