#include "main.h"
#include <stdlib.h>
/**
 * calloc - function allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to allocated memory
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
