#include "main.h"


/**
 * main - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always Success 0
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
			_putchar('\n');
		}
	}
}
