#include <unistd.h>

/**
* _putchar - the method
* @c: the haracter to cjeck
* Return: always 0
* description: malooc free
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
