#include "main.h"
/**
 * print_last_digit - check the code
 * @n: our int
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	 _putchar('0' + a);

	return (a);
}
