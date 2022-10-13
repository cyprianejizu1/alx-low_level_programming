#inclue "function_pointers.h"

/**
 * print_name - Prints the name through passed by function pointers
 * @name: character string
 * @f: function pointer
 *
 * Return: Nothing
 **/

void print_name(char, *name, void (*f)(char *));
{
	if (f)
		f(name)

}
