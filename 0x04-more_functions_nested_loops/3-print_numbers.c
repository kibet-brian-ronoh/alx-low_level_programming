#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9 followed by a new line
 * Return: nothing (void)
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
