#include "holberton.h"

/**
 * *get_print - Choose the specific function that I need
 * to select
 * @format: String of constant data
 *
 * Return: Function pointer depends on the type of data choose
 */
int (*get_print(const char *format))(va_list)
{
	pt types[] = {
		{"c", printChar},
		{"s", printString},
		{"%", printPercentage},
		{"d", printInteger},
		{"i", printInteger},
		{"b", printBinary},
		{"u", printUnsignedDecimal},
		{"o", printUnsignedOctal},
		{"x", printUnsignedHex},
		{"X", printUnsignedHexUpper},
		{NULL, NULL}
	};
	int i;

	for (i = 0; types[i].specifier != NULL; i++)
	{
		if (*format == *(types[i].specifier))
		{
			return (types[i].f);
			}
	}
	return (types[i].f);
}
