/*
  ========================================
  Projeto: strings1.c
  Auto: Valmir S Mesquita
  Data:07/04/2025
  ========================================
*/

/*Declaraçao de Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h> 

/************* Prototipos das funcões **********/



/************** Função principal *************/
int main() {

    char str[] = "Valmir Mesquita";
    char *str1[] = {"V","A","L","M","I","R"};

    printf("Seu nome:%s \n",str);
    printf("Tamanho dos caracteres:%d \n",sizeof(str));

    for (int i = 0; i < 100; i++)
    {
        /* code */
        printf("Seu nome:%s \n",str1[i]);
    }
    
    


    
    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 