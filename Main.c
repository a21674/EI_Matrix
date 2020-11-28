/*****************************************************************//**
 * \file   Main.c
 * \brief
 *
 * \author a21674 - Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h> // lib para reconhecer os carateres especiais usados na lingua portuguesa como os '�, `,^' 
#include "Header.h" //incluimos o nosso ficheiro Header


int main() {
    setlocale(LC_ALL, "Portuguese"); //definimos a codifica��o da nossa regi�o

    int opcao = 0;
    printf("Bem-Vindo ao EI_Matrix \n");


    while (opcao == 0)
    {
        printf("\n 1 - Somar duas matrizes: ");
        printf("\n 2 - Subtrair duas matrizes: ");
        printf("\n 3 - Multiplicar duas matrizes: ");

        printf("\n\n");
        printf("\n Digite a op��o que deseja: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            printf("\n Op��o Escolhida: 1 - Somar duas matrizes: ");
            printf("\nInsira o n�mero de linhas (entre 1 e 10): ");
            scanf("%d", &rows); // l� o numero de linhas

            printf("Insira o n�mero de colunas (entre 1 e 10): ");
            scanf("%d", &colums); // l� o numero de colunas

            insertValuesMatrixA();
            insertValuesMatrixB();

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B �: \n");
            SumMatrix(matrixA, matrixB); // chamamos a fun��o SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 2: 
            printf("\n Op��o Escolhida: 2 - Substrair duas matrizes: ");
            printf("\nInsira o n�mero de linhas (entre 1 e 10): ");
            scanf("%d", &rows); // l� o numero de linhas

            printf("Insira o n�mero de colunas (entre 1 e 10): ");
            scanf("%d", &colums); // l� o numero de colunas

            insertValuesMatrixA();
            insertValuesMatrixB();

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B �: \n");
            SubtractMatrix(matrixA, matrixB); // chamamos a fun��o SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 3: 
            printf("\n 3 - Multiplicar duas matrizes: ");
            break;

        default:
            printf("Insira uma op��o correta");
            break;

        }
           


    }
   

    

    
    

    


   

    return 0;
}