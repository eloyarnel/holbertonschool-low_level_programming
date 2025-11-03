#include "main.h"
/**
 * _pow_recursion - function that returns the value x raised to the y
 * @x: base number
 * @y: exponent number
 * Return: value of x raised to the power of y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
