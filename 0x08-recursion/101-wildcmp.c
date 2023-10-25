#include "main.h"

/**
 * wildcmp - Compare two strings with wildcard '*'
 * @s1: First string
 * @s2: Second string with wildcard '*'
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
	if (*s2 == '*')
	return (wildcmp(s1, s2 + 1));
	return (*s2 == '\0');
	}
	if (*s2 == '\0')
	return (*s1 == '\0');

	if (*s2 == '*')
	return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	if (*s1 == *s2)
	return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
