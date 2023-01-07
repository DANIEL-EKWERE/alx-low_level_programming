#include <unistd.h>

/**
* _putchar - method
* @c: charaxter to check
* Return: Always 0
* decription: about args and argv
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
