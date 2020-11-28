/*****************************************************************//**
 * \file   Functions.c
 * \brief
 *
 * \author a21674 Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include "Header.h"

int SumMatrix(int matrixAA[100][100], int  matrixBB[100][100])
{
    int matrixResult[100][100]; // array para guardar a matriz com o resultado da soma

    for (i = 0; i < rows; ++i)
        for (j = 0; j < colums; ++j)
        {
            matrixResult[i][j] = matrixAA[i][j] + matrixBB[i][j];
        }

    for (i = 0; i < rows; ++i)
        for (j = 0; j < colums; ++j) {
            printf("  %d   ", matrixResult[i][j]);
            if (j == colums - 1) {  // se o j for igual ao numero de colunas -1 cria uma linha em branco e passa para a proxima linha da matriz
                printf("\n \n");
            }
        }
    return matrixResult;
}