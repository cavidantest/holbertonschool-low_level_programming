#include "main.h"

int _is_prime_helper(int n, int d);

/**
 * is_prime_number - returns 1 if n is prime, otherwise 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_is_prime_helper(n, 2));
}

/**
 * _is_prime_helper - checks if n has a divisor starting from d
 * @n: number to check
 * @d: current divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int _is_prime_helper(int n, int d)
{
	if (d * d > n)
		return (1);
	if (n % d == 0)
		return (0);

	return (_is_prime_helper(n, d + 1));
}
