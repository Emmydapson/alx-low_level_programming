#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
		int n;

	while (*s != '\10')
	{
		longi++;
		s++;
	}
	s--;

	for (n = longi; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
