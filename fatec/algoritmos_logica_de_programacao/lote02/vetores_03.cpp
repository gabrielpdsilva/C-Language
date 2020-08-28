#include <stdio.h>

//Criar e coletar valores inteiros nos vetores VT1[3] e VT2[3].
//Concatenar esses valores em um 3º vetor (VT3[6]) e mostrar os seus dados.

int main()
{
    
    int vt1[3], vt2[3], vt3[6], i;

    puts("digite primeiro vetor");    
    for(i = 1; i<=3;i++){
        scanf("%d", &vt1[i]);

    }
    
    puts("digite segundo vetor");    
    for(i=1; i<=3; i++){
        scanf("%d", &vt2[i]);
        //printf("%dº valor: %d\n", i, vetor[i]);
    }
    
    for(i=1;i<=6;i++){
        vt3[i] = vt1[i];
        vt3[i+3] = vt2[i];
        printf("%dº valor: %d\n", i, vt3[i]);
    }
    
    
    return 0;
}
