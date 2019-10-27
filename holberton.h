#ifndef PRINTF_H
#define PRINTF_H

/*Just for testing*/
#include <stdio.h>
#include <string.h>
/*End testing*/

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


typedef struct printTypes
{
	char *specifier;
	void (*f)();
} pt;


/* Tools */
int _putchar(char c);
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
/* End tools */

int _printf(const char *format, ...);

#endif /* PRINTF_H */
