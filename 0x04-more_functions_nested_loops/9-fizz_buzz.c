#include "main.h"

/**
 * main - program entry
 * Return: 0
 */

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - prints the numbers from 0 - 100
 * but with multiples of three replaced with 'Fizz' and multiples of
 * 5 replaced with 'Buzz' and multiples of both 3 and 5 replaced with FizzBuzz
 * Return: Void
 */

void fizz_buzz(void)
{
	int i;

	i = 1;
	while (i < 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("Buzz");
	printf("\n");
}
