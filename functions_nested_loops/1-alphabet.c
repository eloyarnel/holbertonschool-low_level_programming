#include "main.h"

/**
 * main - Prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (*alphabet)
		_putchar(*alphabet++);
	_putchar('\n');
}
