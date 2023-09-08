#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all single-digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", i);
	}

	return (0);
}
