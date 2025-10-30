#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);           /* Primary diagonal */
sum2 += *(a + i * size + (size - 1 - i)); /* Secondary diagonal */
}
_putchar(sum1 / 10 + '0'); /* Print tens digit of sum1 */
_putchar(sum1 % 10 + '0'); /* Print units digit of sum1 */
_putchar('\n');
_putchar(sum2 / 10 + '0'); /* Print tens digit of sum2 */
_putchar(sum2 % 10 + '0'); /* Print units digit of sum2 */
_putchar('\n');
}
