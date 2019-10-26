#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


typedef struct printTypes
{
	char *type;
	void (*f)(va_list, char *, unsigned int);
} pt;

int my_putchar(char c);
int _printf(const char *format, ...);

/* Tools */
size_t _strlen(const char *s);
char *_strcpy(char *dest, char *src);

#endif /* PRINTF_H */
