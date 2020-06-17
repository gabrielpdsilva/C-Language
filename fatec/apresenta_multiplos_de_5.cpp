#include <stdio.h>

int main()
{
    int valor;
    int res;
    puts("Digite um valor entre 1 e 100000");
    do{
        scanf("%d", &valor);
    }while(valor < 1 || valor > 100000);
    
    
    for(int i = 1; i < valor; i++){
        res = i * 5;
        if(res > valor) break;
        printf("Valor: %d", res);
        printf("\n");
        
        
    }
    
    return 0;
}
