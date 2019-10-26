#include <stdio.h>

#include<stdlib.h>

#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float dp, s1, s2, s3;
	dp = 500;
	printf("O depósito inicial é de: %.0f \n", dp);
	s1 = dp + ((dp/100)*1);
	s2 = s1 + ((s1/100)*1);
	s3 = s2 + ((s2/100)*1);
	printf("O saldo após o terceiro mês é de %f", s3);
	return(0);
}
