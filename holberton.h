#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct printTypes - Basic structure of printf
 * @specifier: id of char, char *, int, ...
 * @f: Function that selects the data type
 *
 * Description: id and function of printf
 */
typedef struct printTypes
{
	char *specifier;
	int (*f)();
} pt;


/* Tools */
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
/* End tools */

/* String tools */
int _abs(int n);
void rev_string(char *s);
char *itoa(int value, char *buffer, int base);
char *unsigned_itoa(unsigned int value, char *buffer, int base);

/* End string tools*/

int _printf(const char *format, ...);
#endif /* PRINTF_H */
