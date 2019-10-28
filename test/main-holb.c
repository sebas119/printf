#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*unsigned int ui;
    void *addr;*/

    len = _printf("_Let's try to printf a simple sentence.\n");
    len2 = printf("OLet's try to printf a simple sentence.\n");
    /*ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
    _printf("_Character:[%c]\n", 'H');
    printf("OCharacter:[%c]\n", 'H');
    _printf("_String:[%s]\n", "I am a string !");
    printf("OString:[%s]\n", "I am a string !");
    /*_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);*/
    len = _printf("_Percent:[%%]\n");
    len2 = printf("OPercent:[%%]\n");
    _printf("_Len:[%d]\n", len);
    printf("OLen:[%d]\n", len2);
    /*_printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");*/

	_printf("\nSOME EDGE CASES\n");
	len = _printf("%");
	_printf("\nPercentage case: %d\n", len);

	len = _printf("%s", NULL);
	_printf("\n%d\n", len);

	len = _printf(NULL);
	_printf("\nNULL case: %d\n", len);

	len = _printf("%yd");
	_printf("\n%yd case: %d\n", len);


	len = _printf("%d", -2147483648);
	_printf("\n%d\n", len);

    return (0);
}
