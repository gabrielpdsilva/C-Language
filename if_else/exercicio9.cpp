#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Exercício incompleto das senhas
	setlocale(LC_ALL, "Portuguese");
	/* if(strcmp("hello", "hello") == 0){
		printf("Strings iguais");
	}else{
		printf("String diferentes");
	} */
	int res;
	char senha[5];
	puts("Digite a senha.");
	gets(senha);                  //ou scanf("%s", &senha);
	res = strcmp(senha, "asdfg");
	if(res == 0){
		puts("Senha válida");
	}else{
		puts("Senha inválida");
	}
	
	
	/*
	
	
	Ou:
	if((stcmp(senha, "asdfg"))==0){
	puts("senha válida");
	}else{
	puts("senha inválida");
	}
	
	
	
	*/
	system("PAUSE");
	return(0);
}
