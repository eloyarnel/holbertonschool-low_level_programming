#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 16 starting from 0,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	for (letter = 'a' ; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
