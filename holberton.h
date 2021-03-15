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
int _printf(char *format, ...);
int _strlen(char *s);
char *_strings(va_list s);

#endif/*HOLBERTON_H*/
