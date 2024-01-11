#include "main.h"
/**
 * _print_rev_recursion _ recursive string that that prints reverse
 * @s: reverse string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/* test case */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
