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

    va_start(args, format);

    while (format && format[i])
    {
        switch (format[i])
        {
            case 'c':
                if (printed)
                    printf(", ");
                printf("%c", va_arg(args, int));
                printed = 1;
                break;

            case 'i':
                if (printed)
                    printf(", ");
                printf("%d", va_arg(args, int));
                printed = 1;
                break;

            case 'f':
                if (printed)
                    printf(", ");
                printf("%f", (float)va_arg(args, double));
                printed = 1;
                break;

            case 's':
            {
                char *str = va_arg(args, char *);

                if (printed)
                    printf(", ");

                if (str == NULL)
                    printf("(nil)");
                else
                    printf("%s", str);

                printed = 1;
                break;
            }
        }
        i++;
    }

    printf("\n");
    va_end(args);
}
