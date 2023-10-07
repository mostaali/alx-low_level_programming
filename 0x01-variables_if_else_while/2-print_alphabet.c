#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void) 
	{
		char ch; // Declare a character variable to store the current character
		for (ch = 'a'; ch <= 'z'; ch++) 
		{
			putchar(ch); // Print the current character
		}
		putchar('\n'); // Print a newline character to end the line
		return 0;
}
