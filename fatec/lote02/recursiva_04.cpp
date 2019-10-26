#include <stdio.h>

//Série 4: (n)/1 + (n-1)/2 + (n-2)/3 + ... + (1)/n

float serie4(float n, float i){
    float somatoria;
    if(n == 0 || i == n) return n;
    somatoria = (n/i) + serie4(n-1, i+1);
    printf("somatoria -> %.2f\nn -> %.2f\ni-> %.2f\n", somatoria, n, i);
    return somatoria;
}

int main()
{
    float i = 1;
    float num;
    puts("Digite um valor");
    scanf("%f", &num);
    printf("%.2f", serie4(num, i));

    return 0;
}
