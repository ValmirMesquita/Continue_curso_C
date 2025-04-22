/*
  ========================================
  Projeto: ponteiros_vetores.c
  Auto: Valmir S Mesquita
  Data:07/04/2025
  ========================================
*/

/*Declaraçao de Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 
#include <time.h>

/************* Prototipos das funcões **********/



/************** Função principal *************/
int main() {
  int count;
  int segun;
  
  printf("Digite um numero: ");
  scanf("%d", &count);

  for (int i = 0; i < count; i++)
  {
    printf("%d : %d", i, count);
    sleep(1);
    system("cls");  
  }

  if (count == 60)
  {
    for (int i = 0; i < segun; i++)
      {
        printf("%d : %d", i, i);
        sleep(1);
        system("cls");  
      }
  }
  printf("----- FIM DA CONTAGEM ----- \n");
  
  
    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 