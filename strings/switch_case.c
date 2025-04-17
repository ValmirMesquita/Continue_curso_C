/*
  ========================================
  Projeto: switch_case.c
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
int soma(int a, int b);
int subtracao(int a, int b);
int produto(int a, int b);
int divisao(int a, int b);


/************** Função principal *************/
int main() {

    // viarios tipos de vetores de Sytings
    int x,y,z;
    char ch;
    printf("Digite uma operacao matematica (+,-,*,/): ");
    ch = getchar();

    printf("Digite 2 numeros: ");
    scanf("%d %d",&x,&y);
    switch(ch){
        case '+': z = soma(x,y); break;
        case '-': z = subtracao(x,y); break;
        case '*': z = produto(x,y); break;
        case '/': z = divisao(x,y); break;
        default: z = soma(x,y);
    }
    printf("Resultado = %d\n",z);
    
    system ("PAUSE");
    return 0;
    
}/****************** End main **********************/

/*********** Desenvolvimentos das Funcões ***********/ 
int soma(int a, int b){return a + b;}
int subtracao(int a, int b){return a - b;}
int produto(int a, int b){return a * b;}
int divisao(int a, int b){return a / b;}