#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: our pointer to int
 * @n: our int
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;
	int d;

	for (c = 0, d = n - 1; c < d; c++, d--)
	{
		b = a[c];
		a[c] = a[d];
		a[d] = b;
	}
}
