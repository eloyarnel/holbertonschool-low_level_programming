#include "main.h"
/**
 * sqrt_helper - helper function to find the square root
 * @n: number to find the square root of
 * @guess: current guess for the square root
 * Return: the square root of n or -1 if not a perfect square
 */
int sqrt_helper(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (sqrt_helper(n, guess + 1));
}
