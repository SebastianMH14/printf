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
	if (z == NULL)
	{
		return (NULL);
	}
	return (z);
}

/**
 *_char - send char to the buffer
 *@c: specifecers of a character
 *
 *Return: the character to the buffer
 */
char *_char(va_list c)
{
	char ch;
	char a[2];
	char *str;

	ch = va_arg(c, int);
	str = strfromchar(a, ch);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
/**
 *int_d - send int to the buffer
 *@d: specifecers of a integer
 *
 *Return: the integer to the buffer
 */
char *int_d(va_list d)
{
	int a;
	char str[1024];
	char *pass;

	a = va_arg(d, int);
	_itoa(a, str);
	pass = str;
	if (pass == NULL)
	{
		return (NULL);
	}
	return (pass);
}
