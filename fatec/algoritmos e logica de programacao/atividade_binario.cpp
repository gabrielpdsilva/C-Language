#include <stdio.h>
#include <stdlib.h>


int main() {
    int resultado=0, valor, divisao, resto, auxiliar_binario=1, auxiliar;
    do{
        printf("Digite o numero decimal: ");

        scanf("%d",&valor);

    }while(valor<=1 || valor>1000);

    do{

    resto=valor%2;

    divisao=valor/2;

    valor=divisao;

    auxiliar = resto * auxiliar_binario;
    resultado = resultado + auxiliar;

    auxiliar_binario = auxiliar_binario * 10;

    }while(divisao>0);

    printf("Valor em binario: %d", resultado);

}
