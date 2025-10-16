#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except 'q' and 'e',
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt != 'q' && alphabt != 'e')
			putchar(alphabt);
	}

	putchar('\n');

	return (0);
}


