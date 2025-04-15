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

    // viarios tipos de vetores de Sytings
    char str[] = "Valmir Mesquita";
    char *str1[] = {"V","A","L","M","I","R"};
    char nome[100];

    printf("Digite um nome: ");
    //scanf("%s \n",&nome);
    gets(nome);// Imprime todo o nome completo

    printf("Seu nome completo: %s\n", nome);
    printf("Seu nome e: %s \n",str);
    printf("Tamanho dos caracteres: %d \n",sizeof(str1));
    printf("Tamanho dos caracteres: %d \n",sizeof(str));
    printf("Tamanho dos caracteres: %d \n",sizeof(nome));

    for (int i = 0; i < 100; i++)
    {
        /* code */
        printf("Seu nome: %s \n",str1[i]);
        //printf("Tamanho dos caracteres: %s \n",sizeof(str));
       
    }
    
    


    
    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 