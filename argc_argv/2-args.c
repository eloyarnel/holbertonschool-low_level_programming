#include <stdio.h>
/**
 * 2args - prints all arguments it receives.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: void.
 */
void 2args(int argc, char *argv[])
{
i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
