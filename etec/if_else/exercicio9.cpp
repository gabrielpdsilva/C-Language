#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	//Exerc�cio incompleto das senhas
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
		puts("Senha v�lida");
	}else{
		puts("Senha inv�lida");
	}
	
	
	/*
	
	
	Ou:
	if((stcmp(senha, "asdfg"))==0){
	puts("senha v�lida");
	}else{
	puts("senha inv�lida");
	}
	
	
	
	*/
	system("PAUSE");
	return(0);
}
