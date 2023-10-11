#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int row, column, n;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			n = row * column;

			if (column == 0)
			{
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (n < 10)
				{
					_putchar(' ');
				}

				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
