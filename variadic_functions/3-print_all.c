#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list args;
unsigned int i = 0, printed = 0;
char *str;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", printed ? ", " : "", va_arg(args, int));
printed = 1;
break;
case 'i':
printf("%s%d", printed ? ", " : "", va_arg(args, int));
printed = 1;
break;
case 'f':
printf("%s%f", printed ? ", " : "", (float)va_arg(args, double));
printed = 1;
break;
case 's':
str = va_arg(args, char *);
if (!str)
str = "(nil)";
printf("%s%s", printed ? ", " : "", str);
printed = 1;
break;
}
i++;
}

printf("\n");
va_end(args);
}
