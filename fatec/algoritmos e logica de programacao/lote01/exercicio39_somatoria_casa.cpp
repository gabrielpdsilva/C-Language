#include <stdio.h>

//Calcule a quantidade de grãos contidos em um tabuleiro de xadrez onde:
//Casa: 	1	2	3	4	...	64
//Qdte:	1	2	4	8	...	N


int main()
{
    int casa, quantidade, somatoria;
    quantidade = 1;
    casa=1;
    somatoria = 0;
    printf("casa = %d, quantidade = %d.\n", casa, quantidade);
        for(casa=2;casa<=64;casa++){
            somatoria += quantidade;
            quantidade = quantidade * 2;
            printf("casa = %d, quantidade = %d.\n", casa, quantidade);
            
        }
        printf("Somatória da quantidade de grãos: %d", somatoria);

    return 0;
}
