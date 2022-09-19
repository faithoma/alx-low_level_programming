#include "main.h"
/**
 * _puts - pusts to stdout
 * @str: params
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
