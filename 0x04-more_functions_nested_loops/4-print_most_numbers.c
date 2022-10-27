#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 - 9
 *  followed by new line but skips 2 & 4
 *  Return: Nothing
 */

void print_most_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
