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
void print_number(int n);

for (i = 0; i < n; i++)
{
if (i != 0)
_putchar(',');
_putchar(' ');
if (a[i] < 0)
{
_putchar('-');
print_number(-a[i]);
}
else
{
print_number(a[i]);
}
}
_putchar('\n');
}
