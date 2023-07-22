#include "main.h"

/**
 * print_most_numbers - print the numbers 0 to 9
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if (n != 50)
		{
			if (n != 52)
			{
				_putchar(n);
			}
		}
	}
	_putchar('\n');
}
