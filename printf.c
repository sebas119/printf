#include "holberton.h"

int printChar(va_list args);
int printString(va_list args);
int printPercentage(va_list args);

/**
 * _printf - Emulate the behavior of printf original
 * @format: String constant of data
 *
 * Return: Length of the output
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int ans = 0;
	va_list args;
	pt types[] = {
		{"c", printChar},
		{"s", printString},
		{"%", printPercentage},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && *format != '\0')
	{
		if (*format  == '%')
		{
			format++;
			for (i = 0; types[i].specifier != NULL; i++)
			{
				if (*format == *(types[i].specifier))
				{
					ans += types[i].f(args);
					format++;
					break;
				}
			}
		}
		else
		{
			ans += write(1, format++, 1);
		}
	}

	va_end(args);

	return (ans);
}



/**
 * printChar - Prints a character
 * @args: Argument passed
 * @ans: total of chars
 */
int printChar(va_list args)
{
	char c = va_arg(args, int);

	return (write(1, &c, 1));
}
/**
 * printString - Prints a string
 * @args: Argument passed
 * @ans: total of chars
 */
int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int size = _strlen(str);

	return (write(1, str, size));
}


int printPercentage(va_list args)
{
	char p = '%';

	(void) args;
	return (write(1, &p, 1));
}
