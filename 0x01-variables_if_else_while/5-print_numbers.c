#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print all single-digit numbers of base 10 starting from 0.
 *
 * Return: 0 (success)
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
