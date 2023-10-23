#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to a 2D square array of integers.
 * @size: The size of the square matrix.
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0;
    int sum2 = 0;
    int i;

    for (i = 0; i < size; i++)
    {
        sum1 += *(a + i * size + i); // Sum of the main diagonal
        sum2 += *(a + i * size + (size - 1 - i)); // Sum of the other diagonal
    }

    // Print the sum1
    int divisor = 1000000000; // The maximum power of 10 less than a 32-bit integer
    int num1 = sum1;

    if (num1 == 0)
    {
        _putchar('0');
    }
    else
    {
        while (divisor > 0)
        {
            int digit = num1 / divisor;
            if (digit > 0 || divisor == 1)
            {
                _putchar(digit + '0');
            }
            num1 %= divisor;
            divisor /= 10;
        }
    }

    _putchar(',');

    // Print the sum2
    int divisor2 = 1000000000; // The maximum power of 10 less than a 32-bit integer
    int num2 = sum2;

    if (num2 == 0)
    {
        _putchar('0');
    }
    else
    {
        while (divisor2 > 0)
        {
            int digit = num2 / divisor2;
            if (digit > 0 || divisor2 == 1)
            {
                _putchar(digit + '0');
            }
            num2 %= divisor2;
            divisor2 /= 10;
        }
    }

    _putchar('\n');
}
