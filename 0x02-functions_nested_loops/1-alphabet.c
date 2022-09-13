#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0 (Success)
*/

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
