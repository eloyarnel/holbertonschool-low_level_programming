#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a : pointer to first integer
 * Return: void
 * @b: pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
