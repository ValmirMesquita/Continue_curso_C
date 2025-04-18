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

    var = 5;
    ptr = &var;                     /* forma correta de apontamento para uma vatiavel*/

    
    printf("Resultado: %d\n", &var);/* & Visualiza o endereço decimal da variavel */
    printf("Resultado: %x\n", &var);/* & Visualiza o endereço exa decimal da variavel */
    printf("Resultado do ponteiro: %x\n", ptr);/* ptr Visualiza o endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %x\n", &ptr);/* ptr Visualiza onde foi armazenado endereço da variavel ponteiro.*/
    printf("Resultado do ponteiro: %x\n", *ptr);/* ptr Visualiza o conteudo da variavel.*/
    printf("Resultado: %d\n", var);
    printf("Resultado: %o\n", &var);/* & Visualiza o endereço octa da variavel */
    printf("Resultado: %p\n", &var);/* & Visualiza o endereço no formato de memoria da minha maquina.*/

    /*Valor do ponteiro atualizado*/
    *ptr = 30;

    printf("Valor do ponteiro atualizado: %d  \n", var);/* ptr Visualiza o conteudo da variavel.*/
    
   


    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 