#include <stdio.h>
#include <limits.h>
/**
 * numlength - Calculate the number of digits in an integer.
 * @num: The integer for which to determine the number of digits.
 *
 * Return: The number of digits in the integer 'num'.
 */
int numlength(int num)
{
	int length = 0;

	if (!num)
	{
		return (1);
	}

	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

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
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib2_half1, fib2_half2;
	unsigned long half1, half2;


	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib2_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib2_half2 + fib2_half2;
		if (fib2_half2 + fib2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 100000000;
		}
		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");
		fib1_half1 = fib2_half1;
		fib2_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
