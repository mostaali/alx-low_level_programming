#include "main.h"
/**
 * *string_toupper - changes all lowercase to uppercase.
 * @str: our pointer to char
 * Return: pointer to the result
 */

char *leet(char *str) {
    char *p = str;

    while (*p) {
        char c = *p;
        // Use a single if statement to check for the characters to be replaced
        if (c == 'a' || c == 'A')
            *p = '4';
        else if (c == 'e' || c == 'E')
            *p = '3';
        else if (c == 'o' || c == 'O')
            *p = '0';
        else if (c == 't' || c == 'T')
            *p = '7';
        else if (c == 'l' || c == 'L')
            *p = '1';
        p++;
    }

	return str;
}
