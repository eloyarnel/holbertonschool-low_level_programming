#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array and initializes it with zero
 * @nmemb: number of elements in the array
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory, or NULL if malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size;
void *ptr;
char *char_ptr;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
return (NULL);

char_ptr = (char *)ptr;
for (i = 0; i < total_size; i++)
char_ptr[i] = 0;

return (ptr);
}
