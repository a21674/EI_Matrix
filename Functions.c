/*****************************************************************//**
 * \file   Functions.c
 * \brief
 *
 * \author a21674 Rui Lopes
 * \date   November 2020
 *********************************************************************/

#include "Header.h"

void insertValuesMatrixA()
{
    printf("\nInsere os elementos da Matriz A:\n");
    for (i = 0; i < rows; ++i) // ciclo principal para correr numero de linhas definidas
        for (j = 0; j < colums; ++j) // ciclo secundario para correr o numero de colunas definidas. Este ciclo for est� dentro do outro para ele correr todas as colunas da linha i, s� qdo acabar as colunas � que vai para a linha seguinte
        {
            printf("Insira o elemento a%d%d: ", i + 1, j + 1); //pede para inserir o elemento 
            scanf("%d", &matrixA[i][j]); // l� o elemento inserido
        }

}

void insertValuesMatrixB()
{
    printf("Insere os elementos da Matriz B:\n");
    for (i = 0; i < rows; ++i)  // ciclo principal para correr numero de linhas definidas
        for (j = 0; j < colums; ++j) // ciclo secundario para correr o numero de colunas definidas. Este ciclo for est� dentro do outro para ele correr todas as colunas da linha i, s� qdo acabar as colunas � que vai para a linha seguinte
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
}

int SumMatrix(int matrixAA[10][10], int  matrixBB[10][10])  //inicia fun��o para somar 2 matrizes com at� 10 linhas e 10 colunas
{
    /*Regras para somar 2 matrizes:
    * - T�m obrigatoriamente de ser iguais n� de linhas e colunas
    * - A soma � feita entre os elementos das 2 matrizes, por exemplo:
    *   - o elemento a11 da matriz resultado ser� a soma do elemento: a11 da Matriz A e o elemento a11 da Matriz B;
    *   - o elemento a33 da matriz resultado ser� a soma do elemento: a33 da Matriz A e o elemento a33 da Matriz B;
    */

    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (i = 0; i < rows; ++i)  //cico para criar as linhas pra as nossas matrizes 
        for (j = 0; j < colums; ++j) //cico para criar as colunas pra as nossas matrizes 
        {
            matrixResult[i][j] = matrixAA[i][j] + matrixBB[i][j]; //guarda no array o valor das somas das duas matrizes
        }

    for (i = 0; i < rows; ++i) //ciclo para apresentar as linhas 
        for (j = 0; j < colums; ++j)  //ciclo para apresentar as colunas 
        {
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo n�o terminar apresenta o resultado 
            if (j == colums - 1) {  // se o j for igual ao numero de colunas -1 
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa soma
}


int SubtractMatrix(int matrixAA[10][10], int  matrixBB[10][10])  //inicia fun��o para somar 2 matrizes com at� 10 linhas e 10 colunas
{
    /*Regras para subtrair 2 matrizes:
  * - As 2 matrizes t�m obrigatoriamente de ser iguais, n� de linhas e colunas
  * - A subtra��o � feita entre os elementos das 2 matrizes, por exemplo:
  *   - o elemento a11 da matriz resultado ser� a subtra��o do elemento: a11 da Matriz A e o elemento a11 da Matriz B;
  *   - o elemento a33 da matriz resultado ser� a subtra��o do elemento: a33 da Matriz A e o elemento a33 da Matriz B;
  */

    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (i = 0; i < rows; ++i)  //cico para criar as linhas pra as nossas matrizes 
        for (j = 0; j < colums; ++j) //cico para criar as colunas pra as nossas matrizes 
        {
            matrixResult[i][j] = matrixAA[i][j] - matrixBB[i][j]; //guarda no array resultado o valor da subtra��o das duas matrizes
        }

    for (i = 0; i < rows; ++i) //ciclo para apresentar as linhas 
        for (j = 0; j < colums; ++j)  //ciclo para apresentar as colunas 
        {
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo n�o terminar apresenta o resultado 
            if (j == colums - 1) {  // se o j for igual ao numero de colunas -1 
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa subtra��o
}