#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* Positive anything is better than negative nothing
*/

/**
 * main - This is the program entry in C
 *
 * Description: Program entry
 * Return: 0 if program exited successfully
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
		printf("%d is negative\n", n);
	return (0);
}
