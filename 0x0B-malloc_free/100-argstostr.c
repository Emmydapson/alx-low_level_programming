#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return:zero(0)
 */

char *argstostr(int ac, char **av)

{
	int i, n, z = 0, y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			y++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

	for (n = 0; av[i][n]; n++)
	{
		str[z] = av[i][n];
		z++;
	}

	if (str[z] == '\0')

	{
		str[z++] = '\n';
	}
	}
	return (str);
}

