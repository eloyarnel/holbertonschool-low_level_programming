#include "main.h"

/**
 * Write a funtion that prints ten times the alphabet, in lowercase followed by a new line
 *
 * Description: This program prints ten times the alphabet
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (*alphabet)
		_putchar(*alphabet++);

	_putchar('\n');
}
