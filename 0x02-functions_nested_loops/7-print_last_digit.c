#include "main.h"
/**
 * print_last_digit -prints the last digit of a number
 * @x: the last digit
 * Return: value of the last digit
 */
int print_last_digit(int x)
{
	int ld = x % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
