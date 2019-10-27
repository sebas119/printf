#include "holberton.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int _strlen(const char *s)
{
	int i = 0;

	while(s[i] != '\0')
		i++;

	return (i);
}

/**
 * *_strcpy - Copy the string pointed
 *
 * @dest: Pointer of a char[] variable
 * @src: Pointer of a char[] variable
 * Return: Copy of the pointer char
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		counter++;
	}

	*dest = '\0';

	dest -= counter;

	return (dest);
}
