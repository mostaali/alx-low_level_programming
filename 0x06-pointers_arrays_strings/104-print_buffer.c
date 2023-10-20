#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer.
 * @b: The buffer to be printed.
 * @size: The number of bytes to print from the buffer.
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size && b[i + j] >= 32 && b[i + j] <= 126)
				printf("%c", b[i + j]);
			else if (i + j < size)
				printf(".");
		}
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
