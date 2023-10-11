#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	printf("name : %s",name);

}
int main()
{

	char *name = "hello";
	print_name(name, printf);

}
