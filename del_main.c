#include "holberton.h"
#include <stdio.h>
/**
 * main - Test cases purposes
 *
 * Return: 0 on success
 */
int main(void)
{
	int ans;
	printf("\n\nMIO\n\n");
	_printf("x%cx", 'h');
	printf("\nsalto\n");
	printf("TEST FOR ANS: \n\n");
	ans = _printf("x%cx", 'h');
	printf("ans: %d\n\n", ans);
	printf("\n\nORIGINAL\n\n");
	return (0);
}
