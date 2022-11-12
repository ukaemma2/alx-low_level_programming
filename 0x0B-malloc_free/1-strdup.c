#include "main.h"
#include <stdlib.h>

/**
 * char *_strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy
 * of the string given as a parameter.
 * @str: function returns a pointer to a new string which is a duplicate
 * Return: NULL if str = NULL
 */


char *_strdup(char *str)
{
	char *alloc_mem;
	unsigned int i;
	unsigned int length_of_string = 0;

	if (str == 0)

		return ('\0');


	while (*(str + length_of_string) != '\0')

		length_of_string++;
	length_of_string++;

	alloc_mem = malloc(sizeof(*str) * length_of_string);

	if (alloc_mem == NULL)

		return ('\0');

	for (i = 0; i < length_of_string; i++)
		alloc_mem[i] = *(str + i);

	alloc_mem[i] = '\0';

	return (alloc_mem);
}
