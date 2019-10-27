#include "holberton.h"

/**
 * main - Test cases purposes
 *
 * Return: 0 on success
 */
int main(void)
{
	int ans = 0;
	printf("\nPRINTF MOD\n\n");
	_printf("x%cx%sx", 'h', "hola");
	printf("\nEND PRINTF MOD\n");
	
	
	printf("\n_PRINTF RETURN\n\n");
	ans = _printf("x%cx", 'h');
	printf("\nans: %d\n", ans);
	printf("\n_PRINTF RETURN\n");
	return (0);
}
