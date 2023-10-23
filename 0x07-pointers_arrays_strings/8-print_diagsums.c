#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: pur main int
 * @size: size of the array
 * Return: no return
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
		{
			sum1 += *(a + i);
		}
		if (i % (size - 1) == 0 && i != 0 && i < (size * size) - 1)
		{
			sum2 += *(a + i);
		}
	}
	printf("%ld, %ld\n", sum1, sum2);
}
