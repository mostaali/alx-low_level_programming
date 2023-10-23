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

    char buffer[15]; // Buffer to store integer as a string
    int length1 = 0;
    int length2 = 0;
    int sum1_copy = sum1;
    int sum2_copy = sum2;

    // Calculate the length of sum1 and sum2
    while (sum1_copy > 0)
    {
        sum1_copy /= 10;
        length1++;
    }

    while (sum2_copy > 0)
    {
        sum2_copy /= 10;
        length2++;
    }

    // Convert sum1 to a string
    char *ptr1 = buffer + length1;
    *ptr1 = '\0';
    ptr1--;

    if (sum1 == 0)
    {
        *ptr1 = '0';
    }
    else
    {
        while (sum1 > 0)
        {
            *ptr1 = (sum1 % 10) + '0';
            sum1 /= 10;
            ptr1--;
        }
    }

    // Convert sum2 to a string
    char *ptr2 = buffer + 15 - length2;
    *ptr2 = '\0';
    ptr2--;

    if (sum2 == 0)
    {
        *ptr2 = '0';
    }
    else
    {
        while (sum2 > 0)
        {
            *ptr2 = (sum2 % 10) + '0';
            sum2 /= 10;
            ptr2--;
        }
    }

    // Print the sum1
    ptr1 = buffer;
    while (*ptr1 != '\0')
    {
        _putchar(*ptr1);
        ptr1++;
    }
    _putchar(',');

    // Print the sum2
    ptr2 = buffer + 15 - length2;
    while (*ptr2 != '\0')
    {
        _putchar(*ptr2);
        ptr2++;
    }
    _putchar('\n');
}
