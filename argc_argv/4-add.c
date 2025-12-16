#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if error
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;
char *endptr;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
j = strtol(argv[i], &endptr, 10);
if (*endptr != '\0')
{
printf("Error\n");
return (1);
}
if (j > 0)
sum += j;
}
printf("%d\n", sum);
return (0);
}
