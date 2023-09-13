#include <stdio.h>
#include "main.h"
/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Description: This program calculates and prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, separated by commas and spaces, and followed
 * by a newline. It does not use arrays, recursion, or any external libraries.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	unsigned long fib[100];

	fib[0] = 1;

	fib[1] = 2;
	for (i = 2; i < 100; i++)
	{
	fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 98; i++)
	{
	printf("%lu, ", fib[i]);
	}
	printf("%lu\n", fib[98]);

	return (0);
}
