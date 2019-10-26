#include <stdio.h>

//Mostre todas as possibilidades de 2 dados de forma que a soma tenha como resultado 7.

int main()
{
    int dado1, dado2;
    
    for(dado1=1;dado1<=6;dado1++){
        for(dado2=1;dado2<=6;dado2++){
            if((dado1+dado2)==7){
                printf("%d + %d == 7.\n", dado1, dado2);
            }else{
                printf("dado 1: %d; dado 2: %d\n", dado1, dado2);
            }
            
        }
    }

    return 0;
}
