#include "holberton.h"
#include <stdio.h>
/**
 * main - Test cases purposes
 *
 * Return: 0 on success
 */
int main(void)
{
	int ans = 0;
	printf("\nPRINTF MOD\n\n");
	_printf("aa %c aa %c aa %s %%c %%\n\n\n\n\n", 'h', 'b', "sebas");
	printf("END PRINTF MOD\n");


	printf("\n_PRINTF RETURN\n\n");
	ans = _printf("aa %c aa %c aa %s %% %%", 'h', 'b', "sebas");
	printf("\nans: %d\n", ans);
	printf("\n_PRINTF RETURN\n");
	return (0);
}
