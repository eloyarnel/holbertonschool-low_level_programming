#include "main.h"
/**
 * reset_to_98 - updates the value of a pointer to 98
 * @ n: pointer to an interger
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