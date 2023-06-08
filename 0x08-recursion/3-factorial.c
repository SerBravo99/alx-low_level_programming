#include "main.h"
/**
 * factorial - Returns the factorial of a number
 * @x: number to return factorial from
 *
 * Return: factorial of x
 */

int factorial(int x)
{
	if (x < 0)
		return (-1);
	if (x == 0)
		return (1);
	return (x * factorial(x - 1));
}	
