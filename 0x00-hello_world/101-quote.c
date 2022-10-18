#include <stdio.h>

/*
* Write a C program that prints exactly and that piece
* of art is useful" - Dora Korpar, 2015-10-19
* , followed by a new line, to the standard error.
*/

/**
 * main - This is the program entry in C
 *
 * Description: Program entry
 * Return: 0 if program exited successfully
 */

int main(void)
{
	fprintf(stderr,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
