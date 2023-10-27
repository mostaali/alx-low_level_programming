#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: numbers of stuff added
 * @argv: the things added
 * Return: always 0 SUCCESS, or 1 if error
 */

int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	j = 0;
	while (i > 0)
	{
		if (i >= 25)
			i -= 25;
		else if (i >= 10)
			i -= 10;
		else if (i >= 5)
			i -= 5;
		else if (i >= 2)
			i -= 2;
		else
			i -= 1;
		j++;
	}
	printf("%d\n", j);

	return (0);
}
