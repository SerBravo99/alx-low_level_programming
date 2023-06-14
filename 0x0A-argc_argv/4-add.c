#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int a;

	a = 0;
	while (a < strlen(str))
	{
		if (!isdigit(str[a]))
		{
			return (0);
		}
		a++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int b;
	int x;
	int sum = 0;

	b = 1;
	while (b < argc)
	{
		if (check_num(argv[b]))

		{
			x = atoi(argv[b]);
			sum += x;
		}

		else
		{
			printf("Error\n");
			return (1);
		}

		b++;
	}

	printf("%d\n", sum);

	return (0);
}
