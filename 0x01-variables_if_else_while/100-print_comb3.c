#include <stdio.h>
/**
 * main -t be separated by ,
 * Return: Always 0
 */
int main(void)
{
int x = 1, y = 2;

while ((x <= 8) && (y <= 9))
{
	putchar(x + '0');
	putchar(y + '0');
	if (x == 8)
	{
		putchar(' ');
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
	x++;
	y++;
}
return (0);
}
