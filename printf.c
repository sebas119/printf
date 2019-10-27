#include "holberton.h"

/**
 * _printChar -
 */
void _printChar(va_list args, int *ans)
{
	_putchar(va_arg(args, int));
	*ans = *ans + 1;
}

void _printString(va_list args, int *ans)
{
	printf("%s\n",va_arg(args, char *));
	
	*ans += 2;
}

/**
 * _printf -
 * @format:
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	int ans = 0;
	va_list args;
	pt types[] = {
		{"c", _printChar},
		/*{"s", _printString},*/
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
					types[i].f(args, &ans);
					format++;
					break;
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
