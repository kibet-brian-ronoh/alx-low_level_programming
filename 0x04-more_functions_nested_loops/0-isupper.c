#include "main.h"

/**
* _isupper - checks for uppercase character.
* @c: Character to be checked
* Return: Returns 1 if c is uppercase- and 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
