#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
int main(){
	setlocale(LC_ALL, "Portuguese");
	bool invalido = false;
	char sexo;
	float h, m, f;
	//Ainda falta a parte da string.
	puts("Digite a sua altura.");
	scanf("%f", &h);
	getchar();
	
	sexualidade:
	puts("Você é homem ou mulher?");
	sexo = getchar();
	switch(sexo){
		
		case 'm':
			m = (72.7*h)-58;
			printf("Seu peso ideal é %f.", m);
			invalido = false;
			break;
		case 'f':
			f = (62.1*h)-44.7;
			printf("Seu peso ideal é %f.", f);
			invalido = false;
			break;
		default:
			puts("Insira m para macho ou f para fêmea.");
			invalido = true;
	}
	if(invalido == true)
		goto sexualidade;
	
	system("PAUSE");
	return(0);
}
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	float h, peso;            // h = altura, m = macho, f = fêmea
	char sexo;
	
	puts("Digite a sua altura.");
	scanf("%f", &h);
	puts("Você é: homem ou mulher? Digite m (macho) ou f (fêmea).");
	scanf("%s", &sexo);
	if(sexo == 'm'){
		peso = (72.7*h)-58;
		printf("Seu peso ideal é %.2f", peso);
	}else if (sexo == 'f'){
		peso = (62.1*h)-44.7;
		printf("Seu pesoa ideal é %.2f", peso);
	}
	else{
		puts("Você não é homem nem mulher, não é possível definir seu peso.");
	}
	system("PAUSE");
	return(0);
}
