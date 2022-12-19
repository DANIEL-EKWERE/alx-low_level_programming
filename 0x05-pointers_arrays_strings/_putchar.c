#include "main.h"
#include <unistd.h>


/**
* _putchar - check the code
* @c: character to be cheackedbgor
* Return: Always 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
