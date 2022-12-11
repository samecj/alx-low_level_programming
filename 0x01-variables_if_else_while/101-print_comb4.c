#include <stdio.h>
/**
 * main -  prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;
	int arr[] = {1, 2, 3};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			for (k = 0; k < 3; k++)
			{
				if (i != j && j != k && k != i)
				{
					printf("[%d %d %d]\n", arr[i], arr[j], arr[k]);
				}
			}
		}
	}
	return (0);
}
