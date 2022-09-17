#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 *
 *
 * Return: is zero
 */
void print_number(void)
{
	char digits;

	for (digits = '0'; digits <= '9'; digits++)
	{
		_putchar(digits);
	}
	_putchar('\n');
}
