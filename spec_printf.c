#include "holberton.h"

/**
 *_strings - send string to the buffer
 *@s: specifecers of a string
 *
 *Return: the string to buffer
 */
char *_strings(va_list s)
{
	char *z;

	z = va_arg(s, char *);
	return (z);
}
