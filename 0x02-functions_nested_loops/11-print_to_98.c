#include "main.h"
#include <stdio.h>
/**
* print_to_98 - check the number
* @n: chatacter to be checked
* Return: Always 0
*/
void print_to_98(int n)
{
	if (n >= 0)
	{
		int i;

		for (i = n; i <= 98; i++)
			printf("%d\n", i);
	}
	else
	{
		int i;

		for (i = 98; i >= n; i--)
			printf("%d\n", i);
	}
}
