#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Description: This program prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, separated by commas and followed by a new line.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	long long int a = 1, b = 2, next, i;

	printf("%lld, %lld", a, b);


	for (i = 3; i <= 50; i++)
	{
	next = a + b;
	printf(", %lld", next);
	a = b;
	b = next;
	}

	printf("\n");

	return 0;
}
