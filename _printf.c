#include "holberton.h"

/**
 * _printf - function that produces output according to a format
 * @format: string to specify the the arguments
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int  b;
	char *buffer;
	va_list ag;

	if (format == NULL)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		return (0);
	}
	va_start(ag, format);
	buffer = Create_buff(ag, format, buffer);
	write(1, buffer, _strlen(buffer));
	b = _strlen(buffer);
	va_end(ag);
	free(buffer);
	return (b);
}
