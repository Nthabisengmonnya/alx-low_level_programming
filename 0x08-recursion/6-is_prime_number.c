#include "main.h"
#include <stdio.h>

int is_prime_number(int n);

/**
 * is_prime_number - Return if a number is prime
 * @n: the number to be checked
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (n, 1);
}

/**
 * check_prime - check if number is prime
 * @n:;the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */
int is_prime_number(int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (n, i + 1);
}
