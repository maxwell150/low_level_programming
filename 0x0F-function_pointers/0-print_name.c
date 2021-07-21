#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be print
 * @f: callback function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	(*f)(name);

}
