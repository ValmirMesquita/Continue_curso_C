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
  
  printf("Digite um numero: ");
  scanf("%d", &count);

  for (int i = 0; i < count; i++)
  {
    for (int j = 0; j < count; j++){
    printf("%d : %d", i, j);
    sleep(1);
    system("cls");

   
    }
  }

    
    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 