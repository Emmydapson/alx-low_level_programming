#include <stdio.h>

/**
 * before_main - Function executed before main
 *
 * Description: This function is executed before the main function and
 *              prints two lines of text.
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
		printf("I bore my house upon my back!\n");
}

/**
 * main - Entry point of the program
 *
 * Return: Always 0
 */
int main(void)
{
	printf("This is the main function.\n");
	return (0);
}

