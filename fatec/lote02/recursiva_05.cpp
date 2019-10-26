#include <stdio.h>

//Série 5: (n)! + (n-1)! + (n-2)! + ... + (1)!

float fatorial(float nfat){
    float fat;
    if(nfat == 1 || nfat == 0) return 1;
    fat = nfat * fatorial(nfat-1);
    return fat;
}

float somatoria(float nsoma){
    float soma;
    if(nsoma==1 || nsoma ==0) return 1;
    //somatoria = somatoria + fatorial(nsoma-1);
    soma = fatorial(nsoma) + somatoria(nsoma-1);
    return soma;
}

int main()
{
    float num;
    puts("Digite um valor");
    scanf("%f", &num);
    printf("%.2f", somatoria(num));

    return 0;
}
