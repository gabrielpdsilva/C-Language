#include <stdio.h>

//definindo a struct
struct ponto {
    int x, y;
};

//função que recebe struct como parâmetro e carrega-o
void atribuir_valor(struct ponto *p){

    p->x = 15; //mesma coisa que colocar (*p).x
    p->y = 30; //obs.: não se pode colocar *p.y, caso contrário o compilador achará que é *(p.y)

};

int main(){

    struct ponto p;

    p.x = 2;
    p.y = 5;

    printf("X -> %d\nY -> %d\n", p.x, p.y);

    struct ponto p2;

    atribuir_valor(&p2); //& para indicar que é o endereço de p2

    printf("X -> %d\nY -> %d\n", p2.x, p2.y);

    return 0;
}