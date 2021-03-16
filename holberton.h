#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct modiferes - Struct var
 *
 * @m: Format Specifications
 * @f: The function associated
 */
typedef struct modiferes
{
char *m;
char *(*f)(va_list);
} mod;

int _printf(const char *format, ...);
char *Create_buff(va_list ag, const char *format, char *buff);

/* prototipos para funciones */
int _strlen(char *s);
char *strfromchar(char destination[], char source);

/* prototipos para especificadores */
char *_strings(va_list s);
char *_char(va_list c);

#endif/*HOLBERTON_H*/
