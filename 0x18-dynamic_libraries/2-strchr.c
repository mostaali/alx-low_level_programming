#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to search in.
 * @c: The character to locate.
 * Return: A pointer to the first occurrence
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
	if (*(s + a) == c)
	return (s + a);
	a++;
	}
	if (*(s + a) == c)
	return (s + a);

	return ('\0');
}
