#include <stdio.h>
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
	unsigned long fib1 = 1, fib2 = 2, sum;
	int count;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 3; count <= 98; count++)
	{
	sum = fib1 + fib2;
	fib1 = fib2;
	fib2 = sum;

	if (count < 98)
	{
	printf("%lu, ", sum);
	}
	else
	{
	printf("%lu\n", sum);
	}
	}

	return (0);
}
