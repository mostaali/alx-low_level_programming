#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j, k, word_count;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0, word_count = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	if (word_count == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, word_count = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = i; str[j] != '\0' && str[j] != ' '; j++)
				;
			words[word_count] = (char *)malloc(sizeof(char) * (j - i + 1));

			if (words[word_count] == NULL)
			{
				while (word_count > 0)
					free(words[--word_count]);
				free(words);
				return (NULL);
			}

			for (k = 0; i < j; i++, k++)
				words[word_count][k] = str[i];
			words[word_count][k] = '\0';
			word_count++;
		}
	}
	words[word_count] = NULL;
	return (words);
}
