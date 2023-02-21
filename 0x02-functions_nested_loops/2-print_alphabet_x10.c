#include "main.h"

/**
 * print_alphabet_x10 - function tha prints 10x alphabet
 *
 * Return: always 0
 */


void print_alphabet_x10(void)
{
	int c;
	char g;

	for (c = 1; c <= 10; c++)
	{
		for (g = 'a'; g <= 'z'; g++)
		_putchar(g);
	_putchar('\n');
	}
}
