#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char n;
	n = 'a';
	while (n <= 'z') {
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}


