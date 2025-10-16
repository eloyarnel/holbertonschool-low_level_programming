#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	char d;

	for (c = 'A'; c <= 'Z'; c++)
		for (d = 'a' ; d <= 'z'; d++)
	{
		putchar(c);
		putchar(d);
	}
	putchar('\n');
	return (0);
}
