#include "holberton.h"

/**
 * _printChar -
 */
void _printChar(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * _printf -
 * @format:
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	unsigned int j;
	int ans = 0;
	va_list args;
	pt types[] = {
		{"c", _printChar},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && *format != '\n')
	{
		if(*format == '%')
		{
			format++;

			for (j = 0; types[j].specifier != NULL; j++)
			{
				if (*format == types[j].specifier[0])
				{
					types[j].f(args);
					format++;
					ans++;
				}
			}
		}
		else
		{
			_putchar(*format);
			format++;
			ans++;
		}
	}

	va_end(args);

	return (ans);
}
