#include "main.h"

/**
 * _strlen_recursion - gets the length of a string
 * @s: our string
 * Return:  returns the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	else if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s));
}
