#include "holberton.h"

/**
 * rev_string - Reverse a string in the same memory location
 *
 * @s: Pointer of char variable
 */
void rev_string(char *s)
{
		char *t;
		int counter = 0, middle, temp, i, j, last, begin;

		for (t = s; *t != '\0'; t++)
			counter++;

		middle = (counter % 2 == 0) ? (counter / 2) : ((counter - 1) / 2);
		j = counter - 1;
		for (i = 0; i < middle; i++)
		{
			last = s[j];
			begin = s[i];
			temp = last;
			s[j] = begin;
			s[i] = temp;
			j--;
		}
}

/**
 * _abs - Computes the absolute value of an integer
 *
 * @n: Integer parameter
 * Return: n (int)
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

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
