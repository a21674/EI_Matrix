/*****************************************************************//**
 * \file   Functions.c
 * \brief
 *
 * \author a21674 Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include "Header.h"

int SumMatrix(int matrixAA[10][10], int  matrixBB[10][10])  //inicia função para somar 2 matrizes com até 10 linhas e 10 colunas
{
    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (i = 0; i < rows; ++i)  //clico para linhas
        for (j = 0; j < colums; ++j) //ciclo para colunas
        {
            matrixResult[i][j] = matrixAA[i][j] + matrixBB[i][j]; //guarda no array o valor das somas das duas matrizes
        }

    for (i = 0; i < rows; ++i) //ciclo para apresentar as linhas 
        for (j = 0; j < colums; ++j)  //ciclo para apresentar as colunas 
        {  
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo não terminar apresenta o resultado 
            if (j == colums - 1) {  // se o j for igual ao numero de colunas -1 
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa soma
}