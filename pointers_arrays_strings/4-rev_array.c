#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements in the array.
 * Return: void.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
int temp;

while (start < end)
{
/* Swap the elements at start and end */
temp = a[start];
a[start] = a[end];
a[end] = temp;

/* Move towards the middle */
start++;
end--;
}
}
