#include "holberton.h"

/**
 * printChar - Prints a character
 * @args: Argument passed
 *
 * Return: length of data
 */
int printChar(va_list args)
{
	char c = va_arg(args, int);

	/*return (write(1, &c, 1));*/
	return (buffer(&c, 1, 0));
}
/**
 * printString - Prints a string
 * @args: Argument passed
 *
 * Return: length of data
 */
int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int size;

	if (str == NULL)
		str = "(null)";
	size = _strlen(str);
	/*return (write(1, str, size));*/
	return (buffer(str, size, 0));
}

/**
 * printPercentage - Prints a percent
 * @args: Argument passed
 *
 * Return: length of data
 */
int printPercentage(va_list args)
{
	char p = '%';

	(void) args;
	return (buffer(&p, 1, 0));
}

/**
 * printInteger - Prints an integer
 * @args: Argument passed
 *
 * Return: length of data
 */
int printInteger(va_list args)
{
	char buff[40];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = itoa(num, buff, 10);
	size = _strlen(str);

	return (buffer(str, size, 0));
}

/**
 * printBinary - Prints a binary number
 * @args: Argument passed
 *
 * Return: length of data
 */
int printBinary(va_list args)
{
	char buff[33];
	char *str;
	int num = va_arg(args, int);
	int size;

	str = unsigned_itoa(num, buff, 2);
	size = _strlen(str);

	return (buffer(str, size, 0));
}
