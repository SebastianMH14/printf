#include "holberton.h"

/**
 *_itoa - covert integer to a string
 *@n: input integer
 *@s: output string
 */
void _itoa(int n, char *s)
{
	if (n < 0)
	{
		*s++ = '-';
		*sput_up1(-(n + 1), s) = '\0';
	}
	else
	{
	*sput_u(n, s) = '\0';
	}
}
/**
 *sput_u - converts a positive int into a string
 *@n: integer
 *@s: string
 *
 *Return: int into a string without null
 */
static char *sput_u(unsigned int n, char *s)
{
	unsigned int digit, tenth;

	tenth = n / 10;
	digit = n - 10 * tenth;
	if (tenth != 0)
	{
		s = sput_u(tenth, s);
	}
	*s = (char)(digit + '0');
	return (s + 1);
}
/**
 *sput_up1 - converts a positive int into a string
 *@n: integer
 *@s: string
 *
 *Return: int into a string without null
 */
static char *sput_up1(unsigned int n, char *s)
{
	unsigned int digit, tenth;

	tenth = n / 10;
	digit = n - 10 * tenth;
	if (digit == 9)
	{
		if (tenth != 0)
		{
		s = sput_up1(tenth, s);
		}
		else
		{
			*s++ = '1';
		}
		*s = '0';
	}
	else
	{
		if (tenth != 0)
		{
			s = sput_u(tenth, s);
		}
		*s = (char)(digit + '1');
	}
	return (s + 1);
}
