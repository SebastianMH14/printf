#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
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

/* prototipos para function itoa */
void _itoa(int n, char *s);
static char *sput_u(unsigned int n, char *s);
static char *sput_up1(unsigned intn, char *s);

/* prototipos para especificadores */
char *_strings(va_list s);
char *_char(va_list c);
char *int_d(va_list d);

#endif/*HOLBERTON_H*/
