#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
		putchar(str[c]);
	putchar('\n');
}
