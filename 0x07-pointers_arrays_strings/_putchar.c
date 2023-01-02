#include <unistd.h>

/**
* _putchar - check the code
* @c: character to be checked
* Return: Always 0
* description: return 0
*/
int _putchar(int c)
{
	return (write(1, &c, 1));
}
