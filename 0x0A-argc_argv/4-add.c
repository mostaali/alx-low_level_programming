#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int is_digit(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

int add_numbers(int argc, char *argv[]) {
    int sum = 0;

    if (argc == 1) {
        _putchar('0');
        _putchar('\n');
        return 0;
    }

    for (int i = 1; i < argc; i++) {
        if (is_digit(argv[i])) {
            sum += atoi(argv[i]);
        } else {
            _putchar('E');
            _putchar('r');
            _putchar('r');
            _putchar('o');
            _putchar('r');
            _putchar('\n');
            return 1;
        }
    }

    printf("%d\n", sum);
    return 0;
}

int main(int argc, char *argv[]) {
    return add_numbers(argc, argv);
}
