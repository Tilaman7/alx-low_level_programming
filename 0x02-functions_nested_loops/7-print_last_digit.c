#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @x: the last digit
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int id = x % 10;

	if (id < 0)
		id *= -1;

	_putchar(id + '0');

	return (0);
}
