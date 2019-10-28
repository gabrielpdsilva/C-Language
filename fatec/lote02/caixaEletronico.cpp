#include <stdio.h>

int carregarNotas(){

}

int retirarNotas(){
  escolhaBanco();
}

void mostrarEstatisticas(){
    mostraMaiorSaque();
    mostraMenorSaque();
    mostraMediaSaques();
    mostraValorTotalSaques();
    mostraSobrasCaixa();
}

//funções de estatisticas
void mostraMaiorSaque(){
    printf("Maior saque efetuado: %d", maiorSaque());
}

void mostraMenorSaque(){
    printf("Menor saque efetuado: %d", menorSaque());
}

//funções pra apresentar os valores
void mostraMediaSaques(){
    printf("Média dos saques: %d", mediaSaques());
}

void mostraValorTotalSaques(){
    printf("Valor total dos saques: %d", valorTotalSaques());
}

void mostraSobrasCaixa(){
    printf("Valor das sobras dos caixas: %d", sobrasCaixa());
}

float mediaSaques(){
    //parametros
    //faz o calculo e retorna a media.
}

int maiorSaque(){
  if(valor>maior){
      maior = valor;
      return maior;
  }

}

int menorSaque(){
  if(valor<menor){
      menor = valor;
      return menor;
  }
}

int valorTotalSaques(){
    printf("Valor total dos saques: %d", totalSaques);
}

int sobrasCaixa(){
    printf("Valor das sobras dos caixas: %d", dinheiro_caixa);
    //dinheiro_caixa = dinheiro_caixa - ...
}

//principal
int main()
{
    int switch_escolha, fim_escolha;
    float media_saques;

    while(switch_escolha != 9){

        do{
        puts("Menu Principal\n1 - Carregar Notas\n2 - Retirar Notas\n3 - Estatística\n9 - Fim");
        scanf("%d", &switch_escolha);

            switch(switch_escolha){
                case 1:
                    carregarNotas();
                break;

                case 2:
                    retirarNotas();
                break;

                case 3:
                    mostrarEstatisticas();
                break;

                case 9:
                    puts("Tem certeza de que deseja sair? Digite 9 novamente para sair. Se quiser utilizar o sistema novamente, digite qualquer valor.");
                    scanf("%d", &fim_escolha);
                    break;

                default:
                puts("Opção inválida!\n");

            }

        }while(fim_escolha != 9);

    }

    return 0;

    //============================================================================================
    //solicitando retirada dos valores.
    void retiradaDeNotas(){
      do{
        puts("Digite o valor desejado para saque:");
        scanf("%d", &valor_total);
      }while(valor_total < 2 || valor total > total_notas_caixa);
    }

    void escolhaBanco(){
      do{
        puts("Digite o codigo do seu banco, segundo:\n 1 - Banco do Brasil\n2 - Santander\n3 - Itau\n4 - Caixa");
        scanf("%d", &codigo_banco);
      }while(codigo_banco != 1 || codigo_banco != 2 || codigo_banco != 3 || codigo_banco != 4);
    }

    //============================================================================================
    //primeiros testes para o usuário escolher a quantidade e as notas...
    do{
        do{
          puts("Digite a nota que voce deseja sacar.");
          scanf("%d", &nota);
          if(nota != 100 || nota != 50 || nota != 20 || nota != 10 || nota != 5 || nota != 2){
            puts("Voce nao digitou um valor válido!");
          }
        }while(nota != 100 || nota != 50 || nota != 20 || nota != 10 || nota != 5 || nota != 2);

        puts("Digite a quantidade de notas que você deseja sacar.");
        scanf("%d", &qtd_nota);


    }while(resposta != 1);    //se resposta for 1, sai do laço while.


    total_sacado *= (nota * qtd_nota);

/*PAREI DAQUI!!!!*/
    if(){
      puts("EXCEDEU O LIMITE DO CAIXA");
    }

    while(){

    }
    //============================================================================================

    //testes com array
    int notas[5];
    notas[0] = 100;
    notas[1] = 50;
    notas[2] = 20;
    notas[3] = 10;
    notas[4] = 5;
    notas[5] = 2;

    //============================================================================================
    //testes com carregamento de Notas
    do{
      do{
        puts("Digite o valor que você deseja carregar.");
        scanf("%d", &nota);

        puts("Digite a quantidade de notas que você deseja carregar (máximo permitido: 10 notas).");
        scanf("%d", &qtd_nota);
        if((nota != 100 || nota != 50 || nota != 20 || nota != 10 || nota != 5 || nota != 2) || (opcao <= 0 || opcao > 10)){
          puts("Por favor, digite valores válidos!");
        }

      }while((nota != 100 || nota != 50 || nota != 20 || nota != 10 || nota != 5 || nota != 2) || (opcao <= 0 || opcao > 10));

      total_notas += (nota * qtd_nota);

      puts("Deseja carregar mais notas? Se sim, digite 1. Senão, digite qualquer tecla.");

    }while(resposta != 1);

    //============================================================================================
}
