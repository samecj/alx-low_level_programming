#include <stdio.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
		putchar(cr);

	for (cr = 'Á'; cr <= 'Z'; cr++)
		putchar(cr);

	putchar('\n');

	return (0);
}
