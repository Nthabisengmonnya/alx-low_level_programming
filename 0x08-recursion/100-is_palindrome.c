#include "main.h"

/**
 * is_palindrome _ return the length ofa string
 * @s: string
 * Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return(1 + _strlen_recursion(s + 1));
}

/**
 * compares - compares each character of the string
 * @s: string
 * @n1: small iterator
 * @n2: biggest iterator
 * Return:
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n2) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 2, n2 - 1))
	}
	return (0);
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
