#include "main.h"

/**
 * more_numbers - prints 10 times the numbers 0 - 14
 * followed by a newline character.
 * Return: Nothing (void)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			int k;

			k = j % 10;
			_putchar(k);
		}
		_putchar('\n');
	}
}
