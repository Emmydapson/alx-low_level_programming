#include "main.h"

/**
 * print_triangle - prints a triangle, using the character #
 * @size: The size of the triangle.
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; haash++)
		{
			for (index = size - harsh; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash, index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n')
		}
	}
}
