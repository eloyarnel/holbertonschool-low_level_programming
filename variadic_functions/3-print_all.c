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
    unsigned int i = 0, j;
    char *str;
    const char types[] = "cifs";
    const char *separators[] = {"", ", ", ", ", ", "};

    va_start(args, format);
    while (format && format[i])
    {
        j = 0;
        while (types[j])
        {
            if (format[i] == types[j])
            {
                switch (format[i])
                {
                    case 'c':
                        printf("%s%c", separators[j], va_arg(args, int));
                        break;
                    case 'i':
                        printf("%s%d", separators[j], va_arg(args, int));
                        break;
                    case 'f':
                        printf("%s%f", separators[j], va_arg(args, double));
                        break;
                    case 's':
                        str = va_arg(args, char *);
                        if (!str)
                            str = "(nil)";
                        printf("%s%s", separators[j], str);
                        break;
                }
                break;
            }
            j++;
        }
        i++;
    }
    printf("\n");
    va_end(args);
}
