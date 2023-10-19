#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: our pointer to char
 * Return: pointer to the result
 */
char *leet(char *str)
{
	char a[] = "43071";
	char c[] = "aeotl";
	char d[] = "AEOTL";
	int b;
	char *z = str;

	while (*str)
	{
		for (b = 0; b < 5; b++)
		{
			if (*str == c[b] || *str == d[b])
			{
				*str = a[b];
			}
		}
		str++;
	}

	return (z);
}
