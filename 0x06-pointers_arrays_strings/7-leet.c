#include<main.h>

char *leet(char *str) {
    char *p = str; // Create a pointer to the beginning of the string

    while (*p) {
        char c = *p; // Get the current character
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
        p++; // Move to the next character in the string
    }

    return str;
}
