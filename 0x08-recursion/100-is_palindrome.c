#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: The string
 * @start: Start index
 * @end: End index
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}
