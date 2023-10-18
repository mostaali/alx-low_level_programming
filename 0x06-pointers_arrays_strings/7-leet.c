#include "main.h"

char *leet(char *str)
{
    char *ptr = str;
    char *letters = "aAeEoOtTlL"; // Letters to be replaced
    char *leet_code = "44370171"; // Corresponding "1337" code for the letters

    while (*str) {
        char *letter = letters;
        char *code = leet_code;
        int replace = 0;

        // Check if the current character needs to be replaced
        while (*letter) {
            if (*str == *letter) {
                *str = *code;
                replace = 1;
                break;
            }
            letter++;
            code++;
        }

        if (!replace) {
            str++; // Move to the next character
        }
    }

	return ptr;
}
