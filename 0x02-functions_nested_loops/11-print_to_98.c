#include "main.h"
#include <stdio.h>
/**
* print_to_98 - check the number
* @n: chatacter to be checked
* Return: Always 0
*/
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}

	printf("98");
	putchar('\n');
}