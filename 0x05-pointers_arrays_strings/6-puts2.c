#include "main.h"
#include <stdio.h>
/**
 * puts2 - Prints every other character of a string.
 * @str: The string to be printed.
 */
int main(void)
{
	char str[] = "Hello, World!";

	printf("Original string: %s\n", str);
	puts2(str);

	return (0);
}
