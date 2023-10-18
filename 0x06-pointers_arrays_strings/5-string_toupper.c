#include "main.h"

/**
 * *string_toupper - changes all lowercase to uppercase.
 * @str: our pointer to char
 * Return: pointer to the result
 */
char *string_toupper(char *str)
{
	char *a = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (a);
}
