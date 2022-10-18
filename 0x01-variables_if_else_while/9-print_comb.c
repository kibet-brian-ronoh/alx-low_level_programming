#include <stdio.h>

/**
 * main - This is the program entry in C
 *
 * Description: Program entry
 * Return: 0 if program exited successfully
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
