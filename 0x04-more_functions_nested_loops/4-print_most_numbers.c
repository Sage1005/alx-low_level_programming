#include "main.h"

/**
 * print_numbers - Prints the numbers, from 0 to 9,
 * Except 2 and 4
 *
 * Return: void
 */
void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
