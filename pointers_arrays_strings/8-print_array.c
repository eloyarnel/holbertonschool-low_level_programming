#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the first element of the array
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != 0)
_putchar(',');
_putchar(' ');
if (a[i] < 0)
{
_putchar('-');
printf_number(-a[i]);
}
else
{
printf_number(a[i]);
}
}
_putchar('\n');
}
