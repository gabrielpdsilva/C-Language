#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	float n1, n2, n3, n4, md;
	char nome[15];
	puts("Digite o nome do aluno");
	scanf("%s", &nome); // %s pois trata-se de uma string. Se fosse, caractere, provavelmente seria %c.
	puts("Digite a primeira nota");
	scanf("%f", &n1);
	puts("Digite a segunda nota");
	scanf("%f", &n2);
	puts("Digite a terceira nota");
	scanf("%f", &n3);
	puts("Digite a quarta nota");
	scanf("%f", &n4);
	md = n1 + n2 + n3 + n4 / 4;
	printf("%s, sua média final é de %.1f", nome, md);
	return (0);
	
}
