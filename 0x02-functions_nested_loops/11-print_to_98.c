#include "main.h"
/**
* print_to_98 - check the number
* @n: chatacter to be checked
* Return: Always 0
*/
void print_to_98(int n)
{
	if (n >= 0)
	{
		for (int i = n; i <= 98; i++)
			printf("%d\n", i);
	}
	else
	{
		for (int i = 98; i >= n; i--)
			printf("%d\n", i);
	}
}
