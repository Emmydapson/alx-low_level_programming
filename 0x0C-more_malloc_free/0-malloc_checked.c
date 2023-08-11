#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -it allocates memory using malloc
 * @b: num of bytes to be allocated
 * Return: a pointer to the allocatd memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

