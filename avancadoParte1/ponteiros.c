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

/************* Prototipos das funcões **********/



/************** Função principal *************/
int main() {

    int var;
    int *ptr;                       /*Tipo de variavel (*ptr) como ponteiro*/

    var = 35;
    ptr = &var;                     /* forma correta de apontamento para uma vatiavel*/

    
    printf("Resultado inteiro da memoria: %d\n", &var);/* & Visualiza o endereço decimal da variavel */
    printf("Resultado exa : %x\n", &var);/* & Visualiza o endereço exa decimal da variavel */
    printf("Resultado inteiro: %d\n", var);
    printf("Resultado do ponteiro exa: %x\n", ptr);/* ptr Visualiza o endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro exa: %x\n", &ptr);/* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro exa2: %X\n", *ptr);/* ptr Visualiza o conteudo da variavel.*/
    
    printf("Resultad oct: %o\n", &var);/* & Visualiza o endereço octa da variavel */
    printf("Resultado f. memoria: %p\n", &var);/* & Visualiza o endereço no formato de memoria da minha maquina.*/

    printf("-----------------------------------------------------\n");/* ptr Visualiza o conteudo da variavel.*/

    printf("Resultado do ponteiro: %d\n", var);     /* ptr Visualiza o endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %d\n", *ptr);    /* ptr Visualiza o conteudo da variavel.*/
    printf("Resultado do ponteiro: %d\n", ptr);     /* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %d\n", &ptr);    /* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    
    printf("-----------------------------------------------------\n");/* ptr Visualiza o conteudo da variavel.*/
    /*Valor do ponteiro atualizado*/
    *ptr = 10;

    printf("Valor do ponteiro atualizado: %d  \n", var);/* ptr Visualiza o conteudo da variavel.*/

    printf("Resultado do ponteiro: %d\n", var);     /* ptr Visualiza o endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %d\n", *ptr);    /* ptr Visualiza o conteudo da variavel.*/
    printf("Resultado do ponteiro: %d\n", ptr);     /* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %d\n", &ptr);    /* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    
   


    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 