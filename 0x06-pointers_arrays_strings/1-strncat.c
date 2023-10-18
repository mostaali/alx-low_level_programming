#include "main.h"

/**
 * *_strncat - copies a string
 * @dest: our pointer to char
 * @src: our pointer to char
 * @n: our int
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (a);
}
