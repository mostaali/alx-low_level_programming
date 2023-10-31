#include <stdlib.h>

int count_words(char *str);
char **allocate_memory(int word_count);
void free_memory(char **words, int word_count);
void copy_words(char **words, char *str, int word_count);

char **strtow(char *str)
{
    int word_count;
    char **words;

    if (str == NULL || *str == '\0')
        return NULL;

    word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    words = allocate_memory(word_count);
    if (words == NULL)
        return NULL;

    copy_words(words, str, word_count);
    return words;
}

int count_words(char *str)
{
    int count = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            count++;
    }

    return count;
}

char **allocate_memory(int word_count)
{
    char **words;
    int i;

    words = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (words == NULL)
        return NULL;

    for (i = 0; i < word_count; i++)
    {
        words[i] = NULL;
    }

    return words;
}

void free_memory(char **words, int word_count)
{
    int i;

    for (i = 0; i < word_count; i++)
    {
        free(words[i]);
    }
    free(words);
}

void copy_words(char **words, char *str, int word_count)
{
    int i, j, k;

    for (i = 0, k = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            for (j = i; str[j] != '\0' && str[j] != ' '; j++)
                ;
            words[k] = (char *)malloc(sizeof(char) * (j - i + 1));

            if (words[k] == NULL)
            {
                free_memory(words, word_count);
                break;
            }

            for (k = 0; i < j; i++, k++)
                words[k][k] = str[i];
            words[k][k] = '\0';
            k++;
        }
    }
    words[k] = NULL;
}
