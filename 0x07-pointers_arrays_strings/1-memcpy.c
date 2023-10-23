#include "main.h"

/**
 * *_memcpy - fills memory with a constant byte
 * @src: pointer to the memory area to fill
 * @dest: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: A pointer to the memory area 'dest'.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
