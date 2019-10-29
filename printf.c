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
				ans += write(1, format, 1);
				format++;
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
