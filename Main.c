/*****************************************************************//**
 * \file   Main.c
 * \brief
 *
 * \author a21674 - Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include <stdio.h>
#include <locale.h> // lib para reconhecer os carateres especiais usados na lingua portuguesa como os 'ç, `,^' 
#include "Header.h"


int main() {
    setlocale(LC_ALL, "Portuguese"); //habilita a acentuação para o português


    printf("Bem-Vindo ao EIMatrix\n");

    printf("Insira o número de linhas (entre 1 e 100): ");
    scanf("%d", &rows); // lê o numero de linhas

    printf("Insira o número de colunas (entre 1 e 100): ");
    scanf("%d", &colums); // lê o numero de colunas


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
    printf("\nA Soma das Matrizes A e B é: \n");
    SumMatrix(matrixA, matrixB);

    return 0;
}