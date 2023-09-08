#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print the lower_case alphabet excluding 'q' and 'e'.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
		letter++;
	}

	putchar('\n');

	return (0);
}
