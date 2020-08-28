#include<stdio.h>
#include<locale.h>

//Receba a data de nascimento e atual em ano, mês e dia. Calcule e mostre
//a idade em anos, meses e dias, considerando os anos bissextos.

int main(){
  
  setlocale(LC_ALL, "Portuguese");
  int ano1, mes1, dia1, ano2, mes2, dia2, anof, mesf, diaf;
  int dias_bissextos;

  dias_bissextos = 0;
  
  puts("Digite o dia de nascimento.");
  scanf("%d", &dia1);
  
  puts("Digite o mês de nascimento.");
  scanf("%d", &mes1);
  
  puts("Digite o ano de nascimento.");
  scanf("%d", &ano1);
  
  //validação da primeira data.
  if((ano1 <= 1950 || ano1 >= 2020) || (mes1 <= 0 || mes1 > 12) || (dia1 <= 0 || dia1>31)){
    puts("Dados inválidos.");
  }else{
    
    puts("Digite o dia atual.");
    scanf("%d", &dia2);
    
    puts("Digite o mês atual.");
    scanf("%d", &mes2);
    
    puts("Digite o ano atual.");
    scanf("%d", &ano2);
    
    //validação da segunda data.
    if((ano2 <= ano1 || ano2 >= 2020) || (mes2 <= 0 || mes2 > 12) || (dia2 <= 0 || dia2>31)){
      puts("Dados inválidos.");
    }
    else{
      /*
      //confere o primeiro mes
      if(mes1 == 1 || mes1 == 3 || mes1 == 5  || mes1 == 7 || mes1 == 8 || mes1 == 10 || mes1 == 12){
        maximo_dias1 = 31;
      }else if(mes1 == 4 || mes1 == 6 || mes1 == 9  || mes1 == 11){
        maximo_dias1 = 30;
      }
      
      //confere o segundo mes
      if(mes2 == 1 || mes2 == 3 || mes2 == 5  || mes2 == 7 || mes2 == 8 || mes2 == 10 || mes2 == 12){
        maximo_dias2 = 31;
      }else if(mes2 == 4 || mes2 == 6 || mes2 == 9  || mes2 == 11){
        maximo_dias2 = 30;
      }
*/      

        //for de anos bissextos
        puts("Anos bissextos percorridos:");
        for(int i = ano1; i <= ano2; i++){
          if(i % 4 == 0){
            dias_bissextos++;
            printf("%d\n", i);
          }
        }

        anof = ano2 - ano1;      
            
      //arrume a partir daqui
      //validação de mês
      if(mes2<mes1){
        mesf = (mes2 - mes1) + 12;
        anof++;

      }else{
        mesf = mes2 - mes1;
      }
      
              printf("anof = %d , mesf = %d\n", anof, mesf);
      //printf("mesf = %d", mesf);
      //arrume a partir daqui também
      //validação de dia
      if(dia2<dia1){
          if(mesf == 1 || mesf == 3 || mesf == 5 || mesf == 7 || mesf == 8 || mesf == 10 || mesf == 12){
              diaf = (dia2 - dia1) + 31;
              mesf++;
          }else if(mesf == 2 && (ano2 % 2 == 0 )){
              diaf = (dia2 - dia1) + 29;
              mesf++;
          }else if(mesf == 2 && (ano2 % 2 != 0)){
              diaf = (dia2 - dia1) + 28;
              mesf++;
          }else if(mesf == 4 || mesf == 6 || mesf == 9 || mesf == 11){
              diaf = (dia2 - dia1) + 30;
              mesf++;
          }

      }else{
        diaf = dia2 - dia1;

      }
      
      if(mesf>12){
          mesf = 1;
          anof++;
      }
        printf("anof = %d , mesf = %d\n", anof, mesf);
      //é por causa disso que tá rolando decremento
       if(mesf<mes1){
         //anof--;
        
       }
       
        printf("anof = %d , mesf = %d\n", anof, mesf);

      
      printf("Sua idade precisa é -> Anos: %d, meses: %d, dias: %d\n", anof, mesf, diaf);
      
      //incremento de dias com os dias bissextos
      printf("Idade sem os anos bissextos -> Anos: %d, meses: %d, dias: %d\n", anof, mesf, diaf);

    //somando dias com dias bissextos
      diaf+=dias_bissextos;

      //se diaf>30
      if(diaf>30){
        diaf -= 30;
        mesf++;

      }
      

      printf("Idade com os anos bissextos -> Anos: %d, meses: %d, dias: %d\n", anof, mesf, diaf);
      
    }
  }
  return 0;
}