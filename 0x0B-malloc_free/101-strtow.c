#include <stdio.h>
#include <stdlib.h>

int is_space(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_space(str[i])) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
    }

    return count;
}

char *strndup(const char *str, size_t n) {
    char *copy = (char *)malloc(n + 1);
    if (!copy) return NULL;
    for (size_t i = 0; i < n; i++) {
        copy[i] = str[i];
    }
    copy[n] = '\0';
    return copy;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') return NULL;

    int num_words = count_words(str);
    if (num_words == 0) return NULL;

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) return NULL;

    int word_index = 0;
    int in_word = 0;
    int word_start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_space(str[i])) {
            if (in_word) {
                words[word_index] = strndup(str + word_start, i - word_start);
                if (words[word_index] == NULL) {
                    for (int j = 0; j < word_index; j++) {
                        free(words[j]);
                    }
                    free(words);
                    return NULL;
                }
                word_index++;
                in_word = 0;
            }
        } else if (!in_word) {
            word_start = i;
            in_word = 1;
        }
    }

    if (in_word) {
        words[word_index] = strndup(str + word_start, strlen(str) - word_start);
        if (words[word_index] == NULL) {
            for (int j = 0; j <= word_index; j++) {
                free(words[j]);
            }
            free(words);
            return NULL;
        }
    }

    words[num_words] = NULL;

    return words;
}
