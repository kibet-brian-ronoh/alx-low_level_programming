#include <stdio.h>
/*
 * Write a program that prints the alphabet in lowercase
 * , followed by a new line
 */

/**
 * main - This is the program entry in C
 *
 * Description: Program entry
 * Return: 0 if program exited successfully
 */

int main(void)
{
	char i;

	for (i = 97; i < 123; i++)
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
