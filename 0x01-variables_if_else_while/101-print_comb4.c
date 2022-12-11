#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int h = 0, t = 1, u = 2;

	while ((h <= 7) || (t <= 8) || (u <= 9))
	{
		printf("%d%d%d, ", h, t, u);
		u != 9 ? ++u : (t != 8 ? (++t, u = t + 1) : (++h, t = h + 1, u = t + 1));

	}
	return (0);
}
