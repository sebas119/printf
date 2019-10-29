#include "holberton.h"

/**
 * printUnsignedDecimal - Prints an unsigned int
 * @args: Argument passed
 *
 * Return: length of data
 */
int printUnsignedDecimal(va_list args)
{
	char buff[40];
	char *str;
	unsigned int num = va_arg(args, unsigned int);
	int size;

	str = unsigned_itoa(num, buff, 10);
	size = _strlen(str);

	return (write(1, str, size));
}

/**
 * printUnsignedOctal - Prints an unsigned octal
 * @args: Argument passed
 *
 * Return: length of data
 */
int printUnsignedOctal(va_list args)
{
	char buff[40];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = unsigned_itoa(num, buff, 8);
	size = _strlen(str);

	return (write(1, str, size));
}



/**
 * printUnsignedHex - Prints an unsigned hex
 * @args: Argument passed
 *
 * Return: length of data
 */
int printUnsignedHex(va_list args)
{
	char buff[40];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = unsigned_itoa(num, buff, 16);
	size = _strlen(str);

	return (write(1, str, size));
}

/**
 * printUnsignedHexUpper - Prints an unsigned hex upper
 * @args: Argument passed
 *
 * Return: length of data
 */
int printUnsignedHexUpper(va_list args)
{
	char buff[33];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = string_toupper(unsigned_itoa(num, buff, 16));
	size = _strlen(str);

	return (write(1, str, size));
}
