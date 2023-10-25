#include "main.h"

/**
 * sqrt_recursive - Find the natural square root using recursion
 * @n: The number to find the square root of
 * @guess: Current guess for the square root
 *
 * Return: The natural square root or -1 if not found
 */
int sqrt_recursive(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
	return (guess);
	if (square > n)
	return -1;

	return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The natural square root or -1 if not found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
    
	if (n == 0 || n == 1)
	return (n);

	return (sqrt_recursive(n, 1));
}
