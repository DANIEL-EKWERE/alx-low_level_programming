#include <unistd.h>
/**
* _putchar - the method
* @c: character
* desc: the method
* Return: Always an int
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
