#include <unistd.h>

/**
* _putchar - the method
* @c: charrac5erbto he cheked
* Return: Always 0
* description: malloc
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
