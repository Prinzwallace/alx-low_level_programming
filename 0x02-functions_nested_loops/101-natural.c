#include <stdio.h>

/**
 * main - prints all sums kf multiple 3 and 5
 * Return: Always (Success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}

		i++;
	}

	printf("%d\n", z);
	return (0);
}
