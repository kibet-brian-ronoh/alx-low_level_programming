#include <stdio.h>
/*
 * Write a program that prints all single digit numbers
 *  of base 10 starting from 0, followed by a new line.
 */

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
		printf("%d", i);
	printf("\n");
	return (0);
}
