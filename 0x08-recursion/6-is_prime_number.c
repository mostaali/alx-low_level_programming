#include "main.h"

/**
 * prime - check for prime numbers
 * @n: our main int
 * @i: our main int
 * Return: 1 if prime, 0 otherwise
 */
int prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (prime(n, i + 1));
}
/**
 * is_prime_number - check for prime numbers
 * @n: our main int
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime(n, 2));
	}
}
