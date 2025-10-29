#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to be accepted
 * Return: number of bytes in the initial segment of only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, flag, count = 0;
for (i = 0; s[i] != '\0'; i++)
{
flag = 1;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
flag = 0;
break;
}
}
if (flag == 1)
return (count);
}
return (count);
}
