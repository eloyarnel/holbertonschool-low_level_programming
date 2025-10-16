#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	for (lower = 'a' ; lower <= 'z'; lower++)
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
