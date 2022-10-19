#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line
 * Description: print aalbete
 * Return: Always Success 0
 */

void print_alphabet(void)
{

	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
