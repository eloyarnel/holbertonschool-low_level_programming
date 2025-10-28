#include "main.h"
/**
 * strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used from src
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}

while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
