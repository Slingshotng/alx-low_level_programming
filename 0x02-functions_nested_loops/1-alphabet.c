#include <stdio.h>
#include "main.h"
/**
 *
 *   - Prints the alphabet in lowercase, except for q and e.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
