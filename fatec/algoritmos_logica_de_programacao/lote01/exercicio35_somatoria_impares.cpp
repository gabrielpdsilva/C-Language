#include <stdio.h>
//Receba 2 números inteiros, verifique qual o maior entre eles. Calcule e
//mostre o resultado da somatória dos números ímpares entre esses valores.
int main()
{
    int res, i, a, b;
    do{
        puts("a");
        scanf("%d", &a);
        
        puts("b");
        scanf("%d", &b);
        
    }while((a<0 || b<0) || (a==b));
    
    if(a>b){
        for(i=b;i<=a;i++){
            if(i%2 != 0){
                res+=i;
            }
        }
    }else{
        for(i=a;i<=b;i++){
            if(i%2 != 0){
                res+=i;
            }
        }
        
    }
    printf("%d", res);
    return 0;
}
