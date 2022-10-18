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
	char j;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (j = 65; j <= 90; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
