#include "main.h"
/**
 * main - write a function that prints the sing of a number
 *
 * Return - Always 0
 */
int print_sign(int n);
{
        if (n >= '1')
                _putchar('+');
        else if (n == 0)
                _putchar('0');
        else (n <= '1')
                _putchar('-');
        return (0);
}
