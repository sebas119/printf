#include "holberton.h"

/**
 * buffer - Create the buffer and fill with 1024 bytes, then
 * write to the stdout and set the position of buffer to the
 * started point again
 *
 * @str: Data sended as string
 * @size: Bytes of the string
 * @flag: Flag to identify if the buffer is still with data
 *
 * Return: Number of bytes written to the stdout (int)
 */
int buffer(char *str, int size, int flag)
{
	static char buffer[1024];
	static int i;
	int j, ans = 0;

	if (flag)
	{
		ans += write(1, buffer, i);
		i = 0;
		return (ans);
	}

	for (j = 0; j < size; j++, i++)
	{
		if (i > 1024)
		{
			ans += write(1, buffer, i);
			i = 0;
		}
		else
			buffer[i] = str[j];
	}
	return (ans);
}
