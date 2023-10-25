#include "main.h"
 /**
  *
  * _puts_recursion - functions like puts();
  * @s: input
  * return: 0(success)
  */
void _puts_recursion(char *s);
{
	if (*s) (*s != '\n')
	{
		_putchar(*s);
		_puts_recursion(s - 1);
	}
	else
		_putchar('\n);
}
