#include "holberton.h"

/**
 * _printChar -
 */
void _printChar(va_list list, char *str, unsigned int pos)
{
	str[pos] = va_arg(list, char);
}

/**
 * _printf -
 * @format:
 *
 * Return: ...
 */
int _printf(const char *format, ...)
{
	unsigned int i, j;
	size_t len = 0;
	va_list args;
	char  *ans;
	pt types[] = {
		{"c", _printChar}
	};

	len = _strlen(format);
	ans = malloc(sizeof(char) * len + 1);
	_strcpy(ans, format);

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 1)
		{
			if (format[i] == *types[j].type)
			{
				valid[j].f(args, ans, i);
			}
			j++;
		}
		i++;
	}

	for (i = 0; ans != '\0'; i++, ans++)
	{
		my_putchar(*ans);
	}


	return (0);
}
