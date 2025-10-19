#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function uses _putchar to print all
 * lowercase letters from 'a' to 'z', then prints a newline.
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	while (*alphabet)
		_putchar(*alphabet++);

	_putchar('\n');
}
