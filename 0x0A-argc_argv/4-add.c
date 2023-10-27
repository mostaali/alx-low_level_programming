#include <stdio.h>
#include <stdlib.h>

int is_digit_string(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Not a digit
        }
        str++;
    }
    return 1; // All characters are digits
}

int main(int argc, char *argv[])
{
    int i, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return 0;
    }
    for (i = 1; i < argc; i++)
    {
        if (is_digit_string(argv[i])) {
            sum += atoi(argv[i]);
        } else {
            printf("Error\n");
            return 1;
        }
    }
    printf("%d\n", sum);

    return 0;
}
