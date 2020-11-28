/*****************************************************************//**
 * \file   Main.c
 * \brief
 *
 * \author a21674 - Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h> // lib para reconhecer os carateres especiais usados na lingua portuguesa como os 'ç, `,^' 
#include "Header.h" //incluimos o nosso ficheiro Header


int main() {
    setlocale(LC_ALL, "Portuguese"); //definimos a codificação da nossa região

    int opcao = 0;
    printf("Bem-Vindo ao EI_Matrix \n");


    while (opcao == 0)
    {
        printf("\n 1 - Somar duas matrizes: ");
        printf("\n 2 - Subtrair duas matrizes: ");
        printf("\n 3 - Multiplicar duas matrizes: ");
        printf("\n 4 - Dividir duas matrizes: ");

        printf("\n\n");
        printf("\n Digite a opção que deseja: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: 
            printf("\nOpção Escolhida: 1 - Somar duas matrizes: ");
            printf("\nInsira o número de linhas (entre 1 e 10): ");
            scanf("%d", &rows); // lê o numero de linhas

            printf("Insira o número de colunas (entre 1 e 10): ");
            scanf("%d", &colums); // lê o numero de colunas

            insertValuesMatrixA();
            insertValuesMatrixB();

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B é: \n");
            SumMatrix(matrixA, matrixB); // chamamos a função SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 2: 
            printf("\nOpção Escolhida: 2 - Substrair duas matrizes: ");
            printf("\nInsira o número de linhas (entre 1 e 10): ");
            scanf("%d", &rows); // lê o numero de linhas

            printf("Insira o número de colunas (entre 1 e 10): ");
            scanf("%d", &colums); // lê o numero de colunas

            insertValuesMatrixA();
            insertValuesMatrixB();

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B é: \n");
            SubtractMatrix(matrixA, matrixB); // chamamos a função SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 3: 
            printf("\n 3 - Multiplicar duas matrizes: ");
            break;

        case 4:
            printf("\n 4 - Dividir duas matrizes: ");
            break;

        case 9:
            break;

        default:
            printf("Insira uma opção correta");
            break;

        }
           
        printf("\nPara continuar prima 0. Para sair prima 9: ");
        scanf("%d", &opcao);

    }
   
    return 0;
}