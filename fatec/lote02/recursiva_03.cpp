#include <stdio.h>

//Série 3: (1/1) + (1/2) + (1/3) + ... + (1/n)

float serie(float n){
    float somatoria;
    if(n == 1) return 1;
    somatoria = (1/n) + serie(n-1);
    return somatoria;
}

int main()
{
    float num;
    puts("Digite um valor");
    scanf("%f", &num);
    printf("%f", serie(num));

    return 0;
}
