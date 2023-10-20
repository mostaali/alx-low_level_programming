#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @c: our pointer to char
 * Return: pointer to the result
 */
char *rot13(char *c)
{
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int e;
	char *z = c;

	while (*c)
	{
		for (e = 0; e < 52; e++)
		{
			if (*c == a[e])
			{
				*c = b[e];
				break;
			}
		}
		c++;
	}

	return (z);
}
