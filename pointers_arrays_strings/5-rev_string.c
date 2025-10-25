#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;

	for (i = 0; i < len; i++, len--)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
