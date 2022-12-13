#include "main.h"
#include <unistd.h>
/**
 * _putchar - printout character c
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
