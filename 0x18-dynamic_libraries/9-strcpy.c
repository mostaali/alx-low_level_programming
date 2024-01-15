#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: pointer to our char
 * @dest: pointer to our char
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';

	return (dest);
}
