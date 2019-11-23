#include <stdio.h>
#include <stdbool.h>

//#define NOTA_2 0
//#define NOTA_5 1
//int notas[6] = {NOTA_2, NOTA_5}; ...

//variáveis globais
int bancos[4] = {0, 1, 2, 3};
int maior_saque_banco[4] = {0, 0, 0, 0};
int menor_saque_banco[4] = {10000, 10000, 10000, 10000};
bool teve_saques = false;

//media dos saques dos bancos
float media_saques_banco[4] = {0, 0, 0, 0};

//array pra dividir pela media, exemplo: media = media / notas_sacas
//int notas_sacadas[4] = {0, 0, 0, 0};
int quantidade_saques[4] = {0, 0, 0, 0};

//valor total dos saques
int valor_total_saques[4] = {0, 0, 0, 0};

int valor_notas_total[6] = {400, 500, 500, 400, 500, 500};
int valor_notas[6] = {2, 5, 10, 20, 50, 100};
int qtd_notas_total[6] = {200, 100, 50, 20, 10, 5};
int qtd_notas_solicitadas[6] = {0, 0, 0, 0, 0, 0};
int valor, escolha, i, j, z, escolha_banco;
int dinheiro_caixa;

void totalCaixa(){
  dinheiro_caixa = 0;
  //definindo o valor total inicial do caixa:
  for(int i = 0; i<6; i++){
    dinheiro_caixa += valor_notas_total[i];
  }
}

void maiorSaque(int valor, int z){
  if(valor > maior_saque_banco[z]){
    maior_saque_banco[z] = valor;
  }
}

void menorSaque(int valor, int z){
  if(valor < menor_saque_banco[z]){
    menor_saque_banco[z] = valor;
  }
}

void zerandoNotasSolicitadas(){
  for(i = 0; i < 6; i++){
    qtd_notas_solicitadas[i] = 0;
  }
}

void retirarNotas(){
  totalCaixa();
  puts("Digite o codigo do seu banco, segundo:\n0 - Banco do Brasil\n1 - Santander\n2 - Itau\n3 - Caixa\n");
  scanf("%d", &escolha_banco);
  for(z = 0; z < 4; z++){

    if(z == escolha_banco){

      do{
        puts("Digite o valor que deseja sacar.");
        scanf("%d", &valor);
        if(valor > dinheiro_caixa){
          puts("EXCEDEU O LIMITE DO CAIXA\n");
        }
      }while(valor < 2 || valor > dinheiro_caixa);

      maiorSaque(valor, z);
      menorSaque(valor, z);

      puts("Por favor, selecione uma das opcoes, segundo:");
      for(i=0;i < 6; i++){
        j = 0;
        while(j<=valor){
          if(j == valor){
            printf("Opcao %d -> %d notas(s) de %d;\n", i, qtd_notas_solicitadas[i], valor_notas[i]);
            break;
          }

          j+= valor_notas[i];
          qtd_notas_solicitadas[i]++;
        }
      }

      puts("Digite sua opcao:");
      scanf("%d", &escolha);
          if(escolha >= 0 && escolha < 6){
              for(i = 0; i < 6; i++){
                if(i == escolha){
                  //decrementando o valor de notas total do caixa
                  valor_notas_total[i] -= (valor_notas[i] * qtd_notas_solicitadas[i]);

                  //decrementando a quantidade de notas total do caixa
                  qtd_notas_total[i] -= qtd_notas_solicitadas[i];

                  //media do banco = media do banco + (valor das notas * quantidade das notas)
                  media_saques_banco[z] += (valor_notas[i] * qtd_notas_solicitadas[i]);
                  //incrementa notas sacadas do banco escolhido
                  quantidade_saques[z]++;
                  //notas_sacadas[z] += qtd_notas_solicitadas[i];

                  //valor total dos saques
                  valor_total_saques[z] += (valor_notas[i] * qtd_notas_solicitadas[i]);

                  teve_saques = true;

                  //atualiza as sobras do caixa
                  totalCaixa();
                }
               }
            }else{
                puts("Opcao invalida.");
            }
    }
  }

    //zerando o vetor de notas solicitadas
    /*
    for(i = 0; i < 6; i++){
      qtd_notas_solicitadas[i] = 0;
    }*/
    zerandoNotasSolicitadas();
}

  void mostrarEstatisticas(){
      if(teve_saques == false){
          puts("Ainda nao houve nenhum saque em nenhum banco.");
      }else{
          for(i = 0; i < 4; i++){
        //necessario montar essa condicao pois sem ela, se tiver um banco que nao teve saques, vai ocasionar em divisao ( 0 / 0 ), causando um erro...
            if(quantidade_saques[i] != 0){
                media_saques_banco[i] = media_saques_banco[i] / quantidade_saques[i];
                printf("Codigo do banco: %d\nValor total dos saques: %d\nMedia dos saques: %f\nMaior valor sacado:%d\nMenor valor sacado: %d\nQuantidade de saques realizados: %d\nSobras do caixa: %d.\n\n", bancos[i], valor_total_saques[i], media_saques_banco[i], maior_saque_banco[i], menor_saque_banco[i], quantidade_saques[i], dinheiro_caixa);
            }
          }
      }
  }

  void carregarNotas(){
  int nota, qtd_nota, resposta;
        int i;

          do{
            puts("Escolha uma opcao de nota para carregar:");

              for(i = 0; i < 6; i++){
                  printf("Opcao %d -> nota de %d;\n", i, valor_notas[i]);
              }

              do{
                puts("Digite abaixo sua opcao.");
                scanf("%d", &nota);

                if(nota < 0 || nota > 5){
                  puts("Você não digitou notas validas!");
                }
              }while(nota < 0 || nota > 5);

              do{
                puts("Digite a quantidade de notas que voce deseja carregar (maximo permitido: 30 notas).");
                scanf("%d", &qtd_nota);

                if(qtd_nota > 30 || qtd_nota < 0){
                  puts("Você não digitou uma quantidade valida!");
                }
              }while(qtd_nota > 30 || qtd_nota < 0);

              for(i = 0; i < 6; i++){
                  if(nota == i){
                      valor_notas_total[i] += (valor_notas[i] * qtd_nota);
                      qtd_notas_total[i] += qtd_nota;
                  }
              }
              puts("Deseja carregar mais notas? Se sim, digite 1. Senao, digite qualquer tecla.");
              scanf("%d", &resposta);
          }while(resposta == 1);
          totalCaixa();
}

//principal...
int main()
{
    int escolha_switch, escolha_fim;

    while(escolha_switch != 9){

        do{
        puts("Menu Principal\n1 - Carregar Notas\n2 - Retirar Notas\n3 - Estatística\n9 - Fim");
        scanf("%d", &escolha_switch);

            switch(escolha_switch){
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
                    scanf("%d", &escolha_fim);
                    break;

                default:
                puts("Opção inválida!\n");

            }

        }while(escolha_fim != 9);
        puts("Obrigado por utilizar nosso sistema! Tenha um ótimo dia!");

    }

    return 0;
}

//for de calculos do banco
void funcao_testeBanco(){
  for(z = 0; z < 4; z++){
    if(z == codigo_banco){

      media_saques_banco[z] += valor;

      media_saques_banco[z] = media_saques_banco[z] / notas_sacadas[z];

      if(valor < menor_saque_banco[z]){
        menor_saque_banco[z] = valor;
      }

      else if(valor > maior_saque_banco[z]){
        maior_saque_banco[z] = valor;
      }
    }
  }
}


void testeComSwitch(){

      puts("Digite sua opcao:");
      scanf("%d", &escolha);
      switch(escolha){

        case 0:
          valor_notas_total[0] -= (valor_notas[0] * qtd_notas_solicitadas[0]);
          qtd_notas_total[0] -= qtd_notas_solicitadas[0];
          break;

        case 1:
          valor_notas_total[1] -= (valor_notas[1] * qtd_notas_solicitadas[1]);
          qtd_notas_total[1] -= qtd_notas_solicitadas[1];
          break;

        case 2:
          valor_notas_total[2] -= (valor_notas[2] * qtd_notas_solicitadas[2]);
          qtd_notas_total[2] -= qtd_notas_solicitadas[2];
          break;

        case 3:
          valor_notas_total[3] -= (valor_notas[3] * qtd_notas_solicitadas[3]);
          qtd_notas_total[3] -= qtd_notas_solicitadas[3];
          break;

        case 4:
          valor_notas_total[4] -= (valor_notas[4] * qtd_notas_solicitadas[4]);
          qtd_notas_total[4] -= qtd_notas_solicitadas[4];
          break;

        case 5:
          //valor total das notas (de 100) -= valor das notas (100) * quantidade das notas solicitadas
          valor_notas_total[5] -= (valor_notas[5] * qtd_notas_solicitadas[5]);
          qtd_notas_total[5] -= qtd_notas_solicitadas[5];
          break;

        default:
        puts("Voce nao digitou uma opcao valida.\n");
      }

    }
