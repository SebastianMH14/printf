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
void (*f)();
} mod;

#endif
