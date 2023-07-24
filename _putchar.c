#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints the values of c to the standard output
 *
 * Return: 0. when fail and returns 1 when successfu.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
