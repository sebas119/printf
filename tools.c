#include "holberton.h"

/**
 * _strlen - Count the number of chars in a string
 * @s: String given
 *
 * Return: Length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
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
