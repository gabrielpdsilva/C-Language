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
	puts("Voc� � homem ou mulher?");
	sexo = getchar();
	switch(sexo){
		
		case 'm':
			m = (72.7*h)-58;
			printf("Seu peso ideal � %f.", m);
			invalido = false;
			break;
		case 'f':
			f = (62.1*h)-44.7;
			printf("Seu peso ideal � %f.", f);
			invalido = false;
			break;
		default:
			puts("Insira m para macho ou f para f�mea.");
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
	float h, peso;            // h = altura, m = macho, f = f�mea
	char sexo;
	
	puts("Digite a sua altura.");
	scanf("%f", &h);
	puts("Voc� �: homem ou mulher? Digite m (macho) ou f (f�mea).");
	scanf("%s", &sexo);
	if(sexo == 'm'){
		peso = (72.7*h)-58;
		printf("Seu peso ideal � %.2f", peso);
	}else if (sexo == 'f'){
		peso = (62.1*h)-44.7;
		printf("Seu pesoa ideal � %.2f", peso);
	}
	else{
		puts("Voc� n�o � homem nem mulher, n�o � poss�vel definir seu peso.");
	}
	system("PAUSE");
	return(0);
}
