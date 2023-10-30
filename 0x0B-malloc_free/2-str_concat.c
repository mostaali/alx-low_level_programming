#include <stdlib.h>

/**
 * str_concat - Concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1, length2, i, j;

	if (s1 == Null)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++);

	for (length2 = 0; s2[length2] != '\0'; length2++);

	concatenated = (char *)malloc(sizeof(char) * (length1 + length2 + 1));

	if (concatenated == NULL)
	return (NULL);

	for (i = 0; i < length1; i++)
	concatenated[i] = s1[i];
	for (j = 0; j < length2; j++)
	concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
