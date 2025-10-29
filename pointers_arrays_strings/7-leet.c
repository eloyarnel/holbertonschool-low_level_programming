#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
int i, j;
char leet_from[] = "aAeEoOtTlL";
char leet_to[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; leet_from[j] != '\0'; j++)
{
if (s[i] == leet_from[j])
{
s[i] = leet_to[j];
}
}
}
return (s);
}
