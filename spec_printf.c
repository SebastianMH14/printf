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
	if (ch == '\0')
	{
		return (NULL);
	}
	str = strfromchar(a, ch);
	return (NULL);
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
	return (pass);
}
