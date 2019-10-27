#include "holberton.h"

void printChar(va_list args, int *ans);
void printString(va_list args, int *ans);

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
		{"c", printChar},
		{"s", printString},
		{"%", NULL},		
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
					if (types[i].f != NULL)
					{
						types[i].f(args, &ans);
					}						
					else
					{
						_putchar(*(types[i].specifier)); /* e.g. % */
						ans++;
					}				
						
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



/**
 * _printChar -
 */
void printChar(va_list args, int *ans)
{
	char c = va_arg(args, int);
	_putchar(c);
	*ans = *ans + 1;
}

void printString(va_list args, int *ans)
{
	char *str = va_arg(args, char *);
	printf("%s", str);
	*ans = *ans + 4;
}

