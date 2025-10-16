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

	for (number = '0'; number <= '15'; number++)
		printf("%d" , number);

	printf('\n');

	return (0);
}
