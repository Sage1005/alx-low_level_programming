#include "main.h"

/**
 * _puts - prints a given string to screen
 *
 * @str: passed point argument for string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
