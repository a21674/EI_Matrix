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
    int opcao = 0; // variavel para controlo do menu


    printf("Bem-Vindo ao EI_Matrix \n");


    while (opcao == 0)
    {
        printf("\n 1 - Somar duas matrizes: ");
        printf("\n 2 - Subtrair duas matrizes: ");
        printf("\n 3 - Multiplicar duas matrizes: ");
        printf("\n 4 - Dividir duas matrizes: ");
        printf("\n\n");
        printf("\n Digite a op��o que deseja: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOp��o Escolhida: 1 - Somar duas matrizes: ");
            printf("\nInsira o n�mero de linhas (entre 1 e 10): ");
            scanf("%d", &rowsMatrixA); // l� o numero de linhas
            rowsMatrixB = rowsMatrixA; // como para somas de matrizes estas tem que ter o mesmo tamanho, definimos a matriz B = � matriz A sem perguntar ao utilizador

            printf("Insira o n�mero de colunas (entre 1 e 10): ");
            scanf("%d", &columsMatrixA); // l� o numero de colunas
            columsMatrixB = columsMatrixA; // como para somas de matrizes estas tem que ter o mesmo tamanho, definimos a matriz B = � matriz A sem perguntar ao utilizador

            insertValuesMatrixA(); //fun��o que calcula e pede o numero de elementos da matriz A
            insertValuesMatrixB(); //fun��o que calcula e pede o numero de elementos da matriz B

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B �: \n");
            SumMatrix(matrixA, matrixB, rowsMatrixA, columsMatrixA); // chamamos a fun��o SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 2:
            printf("\nOp��o Escolhida: 2 - Substrair duas matrizes: ");
            printf("\nInsira o n�mero de linhas (entre 1 e 10): ");
            scanf("%d%d", &rowsMatrixA, &rowsMatrixB); // l� o numero de linhas
            rowsMatrixB = rowsMatrixA; // como para somas de matrizes estas tem que ter o mesmo tamanho, definimos a matriz B = � matriz A sem perguntar ao utilizador

            printf("Insira o n�mero de colunas (entre 1 e 10): ");
            scanf("%d%d", &columsMatrixA, &columsMatrixB); // l� o numero de colunas
            columsMatrixB = columsMatrixA; // como para somas de matrizes estas tem que ter o mesmo tamanho, definimos a matriz B = � matriz A sem perguntar ao utilizador

            insertValuesMatrixA();
            insertValuesMatrixB();

            // apresentamos o resultado da soma
            printf("\nA Soma das Matrizes A e B �: \n");
            SubtractMatrix(matrixA, matrixB, rowsMatrixA, columsMatrixA); // chamamos a fun��o SumMatrix e adicionamos como paramentros as nossas Matrizes

            break;

        case 3:
            printf("\n 3 - Multiplicar duas matrizes: ");

            printf("\nInsira o n�mero de linhas da Matriz A (entre 1 e 10): ");
            scanf("%d", &rowsMatrixA); // l� o numero de linhas

            printf("Insira o n�mero de colunas da Matriz A (entre 1 e 10): ");
            scanf("%d", &columsMatrixA); // l� o numero de colunas

            printf("\nInsira o n�mero de linhas da Matriz B (entre 1 e 10): ");
            scanf("%d", &rowsMatrixB); // l� o numero de linhas

            printf("Insira o n�mero de colunas da Matriz B (entre 1 e 10): ");
            scanf("%d", &columsMatrixB); // l� o numero de colunas

            if (columsMatrixA != rowsMatrixB)
            {
                printf("\n O n�mero de colunas da Matriz A tem que ser igual ao n�mero de linhas da Matriz B");
            }
            else
            {
                insertValuesMatrixA();
                insertValuesMatrixB();

                // apresentamos o resultado da soma
                printf("\nO produto das Matrizes A e B �: \n");
                MultiplyMatrix(matrixA, matrixB, rowsMatrixA, columsMatrixA, rowsMatrixB, columsMatrixB); // chamamos a fun��o SumMatrix e adicionamos como paramentros as nossas Matrizes
            }

            break;

        case 4:
            printf("\n 4 - Dividir duas matrizes: ");
            break;

        case 9:
            break;

        default:
            printf("Insira uma op��o correta");
            break;

        }
        printf("\nPara continuar prima 0. Para sair prima 9: ");
        scanf("%d", &opcao);


    }

    return 0;
}