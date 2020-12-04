/*****************************************************************//**
 * \file   Header.h
 * \brief
 *
 * \author a21674
 * \date   November 2020
 *********************************************************************/
#ifndef Header
#define Header

 //int i, j, k; // variaveis para usar nos ciclos for | é correto usar assim?
int rowsMatrixA, rowsMatrixB, columsMatrixA, columsMatrixB;
int matrixA[10][10]; //array bidimensional para a nossa matriz A para o maximo 10 colunas/linhas
int matrixB[10][10]; //array bidimensional para a nossa matriz B para o maximo 10 colunas/linhas
int matrixResult[10][10]; //array bidimensional para a nossa matriz Resultado para o maximo 10 colunas/linhas

void insertValuesMatrixA();
void insertValuesMatrixB();
int SumMatrix(int matrixA[10][10], int  matrixB[10][10], int rowsMatrixA, int columsMatrixA);
int SubtractMatrix(int matrixAA[10][10], int  matrixBB[10][10], int rowsMatrixA, int columsMatrixA);
int MultiplyMatrix(int matrixA[10][10], int  matrixB[10][10], int rowsMatrixA, int columsMatrixA, int rowsMatrixB, int columsMatrixB);


#endif