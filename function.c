#include "holberton.h"
/**
 *_strlen - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
int _strlen(char *s)
{
	int lon = 0;

	while (*s != 0)
	{
		s++;
		lon++;
	}
	return (lon);
}

char *strfromchar(char destination[], char source)
{
	destination[0] = source;
	destination[1] = '\0';
	return (destination);
}
