#include "holberton.h"
/**
 * _printf - function that produces output according to a format
 * @format: string to specify the format
 * Return: the number of characters printed
 */
int _printf(char *format, ...)
{
	mod modif[] = {
		{"s", _strings},
		{"c", _char},
		{"%", NULL},
		{NULL, NULL}
	};
	int i, j, b, m, k = 0;
	char *buffer, *a;
	va_list ag;

	buffer = malloc(sizeof(char) * 1024);
	va_start(ag, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				i++;
			}
			else
			{
				i++;
				for (j = 0; modif[j].m != NULL; j++)
				{
					if (format[i] == modif[j].m[0])
					{
						a = modif[j].f(ag);
						i++;
						for (m = 0; a[m] != '\0'; m++)
						{
							buffer[k] = a[m];
							k++;
						}
					}
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
