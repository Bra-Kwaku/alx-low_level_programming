#include "main.h"

/**
 * Write a function that returns the factorial of a given number.
 * * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: factorial of n
 *  the function should return -1 to indicate an error
 *  Factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return n * (factorial(n - 1));
}
