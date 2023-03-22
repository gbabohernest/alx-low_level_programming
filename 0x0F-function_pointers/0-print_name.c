#include "function_pointers.h"

/**
* print_name - Prints a name
* @name: character string arg
* @f: function pointer with
*	string arg
* Return: nothing(void)
*/

void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;

	f(name);
}
