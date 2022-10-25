#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: input
 *
 * Return: Always n
 */

int _strlen(char *s)
{
	int i = 1, sum = 0;
	char pl = s[0];

	while (pl != '\0')
	{
		sum++;
		pl = s[i++];
	}
	return (sum);
}

