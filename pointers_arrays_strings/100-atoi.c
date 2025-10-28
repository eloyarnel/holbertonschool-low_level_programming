#include "main.h"
/**
 * atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
int i = 0, sign = 1;
unsigned int result = 0;

/* Skip whitespace characters */
while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == '\v' || s[i] == '\f' || s[i] == '\r')
{
i++;
}

/* Handle signs */
while (s[i] == '+' || s[i] == '-')
{
if (s[i] == '-')
sign *= -1;
i++;
}

/* Convert digits to integer */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}

return (result * sign);
}
