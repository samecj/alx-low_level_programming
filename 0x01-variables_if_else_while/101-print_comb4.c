#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;
	char digit[4];

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				digit[0] = i + '0';
				digit[1] = j + '0';
				digit[2] = k + '0';
				digit[3] = '\0';
				printf("%s\n", digit);
			}
		}
	}
	return (0);
}
