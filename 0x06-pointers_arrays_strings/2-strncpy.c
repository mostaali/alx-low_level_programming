#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: our pointer to char
 * @src: our pointer to char
 * @n: our int
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
