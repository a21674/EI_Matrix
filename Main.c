/*****************************************************************//**
 * \file   Main.c
 * \brief
 *
 * \author a21674 - Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h> // lib para reconhecer os carateres especiais usados na lingua portuguesa como os '�, `,^' 
#include "Header.h"


int main() {
    setlocale(LC_ALL, "Portuguese"); //habilita a acentua��o para o portugu�s


    printf("Bem-Vindo ao EIMatrix\n");

    printf("Insira o n�mero de linhas (entre 1 e 100): ");
    scanf("%d", &rows); // l� o numero de linhas

    printf("Insira o n�mero de colunas (entre 1 e 100): ");
    scanf("%d", &colums); // l� o numero de colunas


    printf("\nInsere os elementos da Matriz A:\n");
    for (i = 0; i < rows; ++i) // cliclo para apresentar o numero de linhas definidas
        for (j = 0; j < colums; ++j) // cliclo para apresentar o numero de colunas definidas
        {
            printf("Enter element a%d%d: ", i + 1, j + 1); //apresenta o numero do elemento
            scanf("%d", &matrixA[i][j]);
        }

    printf("Insere os elementos da Matriz B:\n");
    for (i = 0; i < rows; ++i)
        for (j = 0; j < colums; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }



    // printing the result
    printf("\nA Soma das Matrizes A e B �: \n");
    SumMatrix(matrixA, matrixB);

    return 0;
}