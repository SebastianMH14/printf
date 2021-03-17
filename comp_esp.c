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
		{"%", _per},
		{"d", int_d},
		{"i", int_d},
		{NULL, NULL}
	};
	int i, j, m, k = 0;
	char *a;

	for (i = 0; format[i] != '\0'; i++, k++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; modif[j].m != NULL; j++)
			{
				if (format[i] == modif[j].m[0])
				{
					a = modif[j].f(ag);
					if(a == NULL)
					{
						return (NULL);
					}
					i++;
					for (m = 0; a[m] != '\0'; m++, k++)
					{
						buff[k] = a[m];
					}
				}
			}
		}
	buff[k] = format[i];
	}
	buff[k] = '\0';
	return (buff);
}
