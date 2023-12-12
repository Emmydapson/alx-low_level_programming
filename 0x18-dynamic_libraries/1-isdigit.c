#include "main.h"

/**
 * _isdigit - checke if a character is  a digit
 * @n: the number to be checked
 * Return: 1 for a character that is a digit or 0 if not
 */

int _isdigit(int n)
{
	if (n >= 48 && n <= 57)
	{
		return (1);
	}
	return (0);
}
