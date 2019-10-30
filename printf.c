#include "holberton.h"

/**
 * _printf - Emulate the behavior of printf original
 * @format: String constant of data
 *
 * Return: Length of the output
 */
int _printf(const char *format, ...)
{
	int ans = 0;
	va_list args;
	int (*fp)(va_list);
	char c;


	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);

	va_start(args, format);

	while (format != NULL && *format != '\0')
	{
		if (*format  == '%')
		{
			fp = get_print(format + 1);

			if (fp != NULL)
			{
				ans += fp(args);
				format += 2;
			}
			else
			{
				c = *format;
				ans += buffer(&(c), 1, 0);
				format++;
			}
		}
		else
		{
			c = *format;
			ans += buffer(&(c), 1, 0);
			format++;
		}
	}
	ans += buffer("0", 0, 1);
	va_end(args);
	return (ans);
}
