#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Print sum of the 2 diagonals of a square matrix of integers
* @a: Pointer to the matrix
* @size: Size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
	sum1 += a[i * size + i];
	sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
