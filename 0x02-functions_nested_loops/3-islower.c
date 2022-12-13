#include "main.h"

/**
* Return: Always 1 else 0 the code
* @c: checking if it's lower
* _islower - check if it's lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
