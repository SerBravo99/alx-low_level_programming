#include "main.h"
/**
 * _strlen_recursion - Returns a string length
 * @z: The string to measure
 *
 * Return: String length
 */

int _strlen_recursion(char *z)
{
	int longit = 0;

	if (*z)
	{
		longit++;
		longit += _strlen_recursion(z + 1);
	}

	return (longit);
}
