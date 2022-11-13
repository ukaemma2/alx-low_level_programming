#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked -  function that allocates memory using malloc
 * @b: Returns a pointer to the allocated memory
 * Return: Always NULL OR void
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
