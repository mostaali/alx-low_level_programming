#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

int min_coins(int cents) {
    int coins[] = {25, 10, 5, 2, 1};
    int coin_count = 0;

    if (cents <= 0) {
        return 0;
    }

    for (int i = 0; i < 5; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            coin_count++;
        }
    }

    return coin_count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
        return 0;
    }

    int coins_needed = min_coins(cents);
    printf("%d\n", coins_needed);

    return 0;
}
