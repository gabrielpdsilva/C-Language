#include <stdio.h>

int main() {

    int var;
    int *ponteiro; //definindo ponteiro
    var = 10;
    ponteiro = &var; //agora o ponteiro aponta para var
    printf("Conteudo de var: %d\n", var);
    printf("Endereco de var: %p\n", &var);
    printf("Conteudo de ponteiro: %p\n", ponteiro); //printa o endereço onde PONTEIRO está apontando. Ou seja, o mesmo endereço de VAR.

    return 0;

}