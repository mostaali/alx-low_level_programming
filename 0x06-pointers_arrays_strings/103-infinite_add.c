#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: our pointer to char
 * @n2: our pointer to char
 * @r: our pointer to char
 * @size_r: our int size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, sum = 0, carry = 0, i, j;

	while (n1[l1] != '\0')
		l1++;

	while (n2[l2] != '\0')
		l2++;

	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);

	i = l1 - 1;
	j = l2 - 1;
	r[size_r] = '\0';

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';
		if (i >= 0)
			i--;
		if (j >= 0)
			j--;
	}
	if (carry > 0 && size_r > 0)
	{
		r[--size_r] = carry + '0';
	}
	if (size_r == 0 && (i >= 0 || j >= 0 || carry > 0))
		return (0);

	return (&r[size_r]);
}
