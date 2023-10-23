#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: The string to search in.
 * @accept: the searching material.
 * Return: A pointer to the first occurrence
 * or NULL if the character is not found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
