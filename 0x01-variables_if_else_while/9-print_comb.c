#include <stdio.h>

/**
 * main - Prints all possiblecombinations of single-digit numbers
 *
 * Description: it prints all possible
 * combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
 }
