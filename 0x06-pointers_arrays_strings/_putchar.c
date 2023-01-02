#include <unistd.h>

/**
* _putchar - check the code
* @c: character to check
* Return: Always 0
* description: return 0
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
