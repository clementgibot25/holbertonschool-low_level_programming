#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
