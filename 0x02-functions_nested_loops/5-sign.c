#include "main.h"

/**
* print_sign - check the code
* @n: character to check
* Return: Always 1 if positive 0 of zero else -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else
	{
		_putchar('-');

		return (-1);
	}
}
