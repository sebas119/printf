#include "holberton.h"

/**
 * itoa - Converts integeres to strings
 * @value: Data to be converted
 * @buffer: Array to store the data
 * @base: Numerical base to convert
 *
 * Return: String that represent the integers
 */
char *itoa(int value, char *buffer, int base)
{
	unsigned int n = _abs(value);
	unsigned int i = 0;
	unsigned int r;

	if (base < 2 || base > 32)
		return (buffer);

	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 65 + (r - 10);
		else
			buffer[i++] = 48 + r;
		n /= base;
	}

	if (i == 0)
		buffer[i++] = '0';

	if (value < 0 && base == 10)
		buffer[i++] = '-';

	buffer[i] = '\0';
	rev_string(buffer);
	return (buffer);
}




/**
 * unsigned_itoa - Converts unsigned integers to string
 * @value: Data to be converted
 * @buffer: Array to store the data
 * @base: Numerical base to convert
 *
 * Return: String that represent the integers
 */
char *unsigned_itoa(unsigned int value, char *buffer, int base)
{
	unsigned int n = value;
	unsigned int i = 0;
	unsigned int r;

	if (base < 2 || base > 32)
		return (buffer);

	while (n)
	{
		r = n % base;
		if (r >= 10)
			buffer[i++] = 97 + (r - 10);
		else
			buffer[i++] = 48 + r;
		n /= base;
	}

	if (i == 0)
		buffer[i++] = '0';

	buffer[i] = '\0';
	rev_string(buffer);
	return (buffer);
}


/**
 * *string_toupper - Changes all lowercase letters of a string to uppercase
 * @a: Pointer to a char array char[]
 * Return: string uppercase
 */
char *string_toupper(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			a[i] -= 32;
		i++;
	}
	return (a);
}
