#include <stdio.h>
/**
 * main - print alpha in lower  case
 * Return: Always 0
 */
int main(void)
{
	char lwc;

	for (lwc = 'á'; lwc <= 'z'; lwc++)
	{
		putchar(lwc);
	}
	putchar('\n');
	return (0);
}
