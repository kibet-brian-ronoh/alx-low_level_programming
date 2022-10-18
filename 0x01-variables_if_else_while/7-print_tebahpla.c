#include <stdio.h>
/**
 * main - This is the program entry in C
 *
 * Description: Program entry
 * Return: 0 if program exited successfully
 */

int main(void)
{
	char i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
