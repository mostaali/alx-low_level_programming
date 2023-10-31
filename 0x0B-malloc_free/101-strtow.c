#include <stdlib.h>

int count_words(char *str);
char **allocate_memory(int word_count);
void free_memory(char **words, int word_count);
void copy_words(char **words, char *str, int word_count);

char **strtow(char *str)
{
    int word_count = count_words(str);
    if (word_count == 0)
        return NULL;

    char **words = allocate_memory(word_count);
    if (words == NULL)
        return NULL;

    copy_words(words, str, word_count);
    return words;
}

int count_words(char *str)
{
    // Count the number of words in the string.
    // Implement your counting logic here.
    // Return the count.
}

char **allocate_memory(int word_count)
{
    // Allocate memory for the array of words.
    // Return the allocated memory.
}

void free_memory(char **words, int word_count)
{
    // Free the memory for the words array.
}

void copy_words(char **words, char *str, int word_count)
{
    // Copy words from the string into the words array.
    // Implement the copying logic.
}
