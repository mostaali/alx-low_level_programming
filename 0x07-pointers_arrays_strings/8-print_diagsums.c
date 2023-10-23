#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the square matrix.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0;
    int sum2 = 0;
    int i, j;

    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i];
        sum2 += a[i * size + (size - 1 - i)];
    }

    char buffer[12]; // Assuming int max is 10 digits, plus a comma and space.
    int num1 = sum1;
    int num2 = sum2;

    if (num1 == 0) {
        _putchar('0');
    } else {
        if (num1 < 0) {
            _putchar('-');
            num1 = -num1;
        }
        int index = 0;
        while (num1 != 0) {
            buffer[index] = (num1 % 10) + '0';
            num1 /= 10;
            index++;
        }
        for (; index >= 0; index--) {
            _putchar(buffer[index]);
        }
    }

    _putchar(',');

    if (num2 == 0) {
        _putchar('0');
    } else {
        if (num2 < 0) {
            _putchar('-');
            num2 = -num2;
        }
        int index = 0;
        while (num2 != 0) {
            buffer[index] = (num2 % 10) + '0';
            num2 /= 10;
            index++;
        }
        for (; index >= 0; index--) {
            _putchar(buffer[index]);
        }
    }

    _putchar('\n');
}
