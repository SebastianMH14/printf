#include "holberton.h"

/**
 * Create_buff - take format and compares Format Specifications \
 *and save them into the buffer.
 *@ag: list the arguments
 *@format: string to specify the the arguments
 *@buff: alocates buffer
 *
 *Return: buffer with information in it
 */
char *Create_buff(va_list ag, const char *format, char *buff)
{
	mod modif[] = {
		{"s", _strings},
		{"c", _char},
	/*	{"d", int_d},*/
		{NULL, NULL}
	};
	int i, j, m, k = 0;
	char *a;

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
						buff[k] = a[m];
						k++;
					}
					}
				}
			}
		}
		buff[k] = format[i];
		k++;
	}
	buff[k] = '\0';
	return (buff);
}
