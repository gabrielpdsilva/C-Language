#include <stdio.h>

//Calcule e mostre quantos anos serão necessários para que Ana seja maior que Maria
//sabendo que Ana tem 1,10 m e cresce 3 cm ao ano e Maria tem 1,5 m e cresce 2 cm ao ano.

int main()
{
    float altura_ana, altura_maria, cresce_ana, cresce_maria;
    int anos;
    anos = 0;
    altura_ana = 1.10;
    altura_maria = 1.50;
    cresce_maria = 0.02;
    cresce_ana = 0.03;
    while(altura_ana<altura_maria){
        altura_ana+=cresce_ana;
        altura_maria+=cresce_maria;
        anos++;
    }
    printf("%d", anos);
    return 0;
}
