#include <stdio.h>
/**
 * main -t be separated by ,
 * Return: Always 0
 */
int main(void)
{
int x = 1, y = 2;

for (x = 0; x <= 8; x++)
{
	for (y = 1; y <= 9; y++)
	{
		if (x != y)
		{
			putchar(x + '0');
			putchar(y + '0');
			if (x == 8 && y == 9)
			{
				putchar(' ');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
return (0);
}
