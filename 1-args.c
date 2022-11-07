#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of argument
 * @argc: number of argument
 * @argv: array of argument
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i =  0;

	for (; i < argc; i++)
	{
		printf("%s\n ", argv[i]);
	}
	return ('\n');
}

