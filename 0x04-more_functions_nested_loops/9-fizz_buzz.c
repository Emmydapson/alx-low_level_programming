#include <stdio.h>

/**
 * main - prints the numbers from 1-100 in multiple of three,
 * fiiz is printed instead of five and buzz is printed for multiples of both
 * three and five
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

	if (num == 100)
		continue;
	printf(" ");
	}
	printf("\n");

	return (0);
}
