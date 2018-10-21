// ConsoleApplication16.cpp: 定义控制台应用程序的入口点。
#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#define M 5
int matrix[M][M];
void init()
{
	int i, j;
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			matrix[i][j] = 0;
	}
}
void MagicMatrix()
{
	int i=0,j=M/2,k=1;
	matrix[i][j]=k;
	for (k= 2; k <= M*M; k++)
	{
		if (matrix[(i - 1+M) % M][(j + 1) % M] == 0)
		{
			i = (i-1+M)%M;
			j = (j+1)%M;
			matrix[i][j] = k;
		}
		else
		{
			i = (i+1)%M;
			matrix[i][j] = k;
		}
	}
}
int main()
{
	int i, j;
	MagicMatrix();
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			printf("%4d", matrix[i][j]);
		printf("\n");
	}
	system("pause");
    return 0;
}

