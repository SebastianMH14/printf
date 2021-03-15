#include "holberton.h"

/**
 *_strings - 
 *@s:
 *Return:
 */
char *_strings(va_list s, char len)
{
	char *z;
	int i;

	z = va_arg(s, char *);
	len += _strlen(z);
	return (z);
}
