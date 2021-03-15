#include "holberton.h"

/**
 * _printf - function that produces output according to a format
 * @format: string to specify the format
 * Return: the number of characters printed
 */
int _printf(char *format, ...)
{
    mod modif[] = {
<<<<<<< HEAD
        {"s", _strings},
        /*{"c", NULL},
=======
      /*  {"s", NULL},
        {"c", NULL},
>>>>>>> d65069be934c640072a8ca5a19c54ff43fdc0071
        {"%", NULL},*/
        {NULL, NULL}
    };
    int i, j, b, k = 0;
<<<<<<< HEAD
    char *buffer = NULL;
    va_list ag;

   buffer = malloc(sizeof(char) * 1024);
=======
    char *buffer;
    va_list ag;

    buffer = malloc(sizeof(char) * 1024);
>>>>>>> d65069be934c640072a8ca5a19c54ff43fdc0071

    va_start(ag, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%')
        {
            i++;
            for (j = 0; modif[j].m != NULL; j++)
            {
                if (format[i] == modif[j].m[0])
                {
<<<<<<< HEAD
                    modif[j].f(ag, buffer[k]);
                    i++;
=======
                    modif[j].f(ag, buffer);
>>>>>>> d65069be934c640072a8ca5a19c54ff43fdc0071
                }
            }
        }
        buffer[k] = format[i];
        k++;
    }
    buffer[k] = '\0';
    write(1, buffer, _strlen(buffer));
    b = _strlen(buffer);
    va_end(ag);
    free(buffer);
    return (b);
}
