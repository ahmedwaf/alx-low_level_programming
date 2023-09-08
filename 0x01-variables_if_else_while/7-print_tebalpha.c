#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
	putchar(letter);
	letter--;
	}

	putchar('\n');

	return (0);
}
