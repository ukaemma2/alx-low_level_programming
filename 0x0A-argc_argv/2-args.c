#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments
 * @argc: number of arguments
 * @argv: array of argument
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

