#include <stdio.h>

//formas de passar referência de um vetor:
//*vetor
//vetor[]
//vetor[tamanho]
void mostrar_vetor(int *vetor, int tamanho_vetor){
    
    for(int i = 0; i < tamanho_vetor; i++)
        printf("Vetor[%d] = %d\n", i, vetor[i]);

}

//no caso das matrizes, é necessário especificar o número de colunas.
void mostrar_matriz(int matriz[][2], int tamanho_matriz){
    for(int i = 0; i < tamanho_matriz; i++)
        for(int j = 0; j < 2; j++)
            printf("Matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
}

int main(){

    int vetor[4] = {3,4,2,5};

    mostrar_vetor(vetor, 4);

    int matriz[3][2] = {
                        {10, 8},
                        {32, 4},
                        {5, 13}
                    };

    mostrar_matriz(matriz, 3);

    return 0;

}