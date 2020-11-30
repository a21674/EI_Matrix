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
    printf("\nInsira os elementos da Matriz A:\n");
    for (int i = 0; i < rowsMatrixA; i++) // ciclo principal para correr numero de linhas definidas
        for (int j = 0; j < columsMatrixA; j++) // ciclo secundario para correr o numero de colunas definidas. Este ciclo for está dentro do outro para ele correr todas as colunas da linha i, só qdo acabar as colunas é que vai para a linha seguinte
        {
            printf("Insira o elemento a%d%d: ", i + 1, j + 1); //pede para inserir o elemento 
            scanf("%d", &matrixA[i][j]); // lê o elemento inserido
        }

}

void insertValuesMatrixB()
{
    printf("\nInsere os elementos da Matriz B:\n");
    for (int i = 0; i < rowsMatrixB; i++)  // ciclo principal para correr numero de linhas definidas
        for (int j = 0; j < columsMatrixB; j++) // ciclo secundario para correr o numero de colunas definidas. Este ciclo for está dentro do outro para ele correr todas as colunas da linha i, só qdo acabar as colunas é que vai para a linha seguinte
        {
            printf("Insira o elemento a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
}

int SumMatrix(int matrixA[10][10], int  matrixB[10][10], int rowsMatrixA, int columsMatrixA)  //inicia função para somar 2 matrizes com até 10 linhas e 10 colunas
{
    /*Regras para somar 2 matrizes:
    * - Têm obrigatoriamente de ser iguais nº de linhas e colunas
    * - A soma é feita entre os elementos das 2 matrizes, por exemplo:
    *   - o elemento a11 da matriz resultado será a soma do elemento: a11 da Matriz A e o elemento a11 da Matriz B;
    *   - o elemento a33 da matriz resultado será a soma do elemento: a33 da Matriz A e o elemento a33 da Matriz B;
    */

    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (int i = 0; i < rowsMatrixA; i++)  //cico para criar as linhas pra as nossas matrizes 
        for (int j = 0; j < columsMatrixA; j++) //cico para criar as colunas pra as nossas matrizes 
        {
            matrixResult[i][j] = matrixA[i][j] + matrixB[i][j]; //guarda no array o valor das somas das duas matrizes
        }

    for (int i = 0; i < rowsMatrixA; i++) //ciclo para apresentar as linhas 
        for (int j = 0; j < columsMatrixA; j++)  //ciclo para apresentar as colunas 
        {
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo não terminar apresenta o resultado 
            if (j == columsMatrixA - 1) {  // se o j for igual ao numero de colunas -1 
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa soma
}


int SubtractMatrix(int matrixAA[10][10], int  matrixBB[10][10], int rowsMatrixA, int columsMatrixA)  //inicia função para somar 2 matrizes com até 10 linhas e 10 colunas
{
    /*Regras para subtrair 2 matrizes:
  * - As 2 matrizes têm obrigatoriamente de ser iguais, nº de linhas e colunas
  * - A subtração é feita entre os elementos das 2 matrizes, por exemplo:
  *   - o elemento a11 da matriz resultado será a subtração do elemento: a11 da Matriz A e o elemento a11 da Matriz B;
  *   - o elemento a33 da matriz resultado será a subtração do elemento: a33 da Matriz A e o elemento a33 da Matriz B;
  */

    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (int i = 0; i < rowsMatrixA; i++)  //cico para criar as linhas pra as nossas matrizes 
        for (int j = 0; j < columsMatrixA; j++) //cico para criar as colunas pra as nossas matrizes 
        {
            matrixResult[i][j] = matrixA[i][j] - matrixB[i][j]; //guarda no array resultado o valor da subtração das duas matrizes
        }

    for (int i = 0; i < rowsMatrixA; i++) //ciclo para apresentar as linhas 
        for (int j = 0; j < columsMatrixA; j++)  //ciclo para apresentar as colunas 
        {
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo não terminar apresenta o resultado 
            if (j == columsMatrixA - 1) {  // se o j for igual ao numero de colunas -1 
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa subtração
}



int MultiplyMatrix(int matrixA[10][10], int  matrixB[10][10], int rowsMatrixA, int columsMatrixA, int rowsMatrixB, int columsMatrixB)  //inicia função para multiplicar 2 matrizes com até 10 linhas e 10 colunas
{
    /*Regras para multiplicar 2 matrizes:
  * - O num de colunas da Matriz A tem que ser igual ao num de linhas da Matriz B
  */
    int sum = 0;
    int matrixResult[10][10]; // array para guardar a matriz com o resultado da soma

    for (int i = 0; i < rowsMatrixA; i++) { //ciclo para correr as linhas pra as nossas matrizes 
        for (int j = 0; j < columsMatrixB; j++) {
            for (int k = 0; k < rowsMatrixB; k++) //ciclo para criar as colunas pra as nossas matrizes 
            {
                sum = sum + matrixA[i][k] * matrixB[k][j]; //variavel auxiliar para guarda a soma e multiplicao da coluna pela linha
            }
            matrixResult[i][j] = sum;  //
            sum = 0;
        }
    }

    for (int i = 0; i < rowsMatrixA; i++) //ciclo para apresentar as linhas 
        for (int j = 0; j < columsMatrixA; j++)  //ciclo para apresentar as colunas 
        {
            printf("  %d   ", matrixResult[i][j]); //enquanto o ciclo não terminar apresenta o resultado 
            if (j == columsMatrixA - 1) {  // se o j for igual ao numero de colunas -1 (j começa em zero)
                printf("\n \n");    // cria uma linha em branco e passa para a proxima linha da matriz
            }
        }
    return matrixResult; //devolvemos o resultado da nossa subtração
}