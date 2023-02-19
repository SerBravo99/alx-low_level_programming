#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
printf("Size of char: %zu 1 byte(s)\n", sizeof(char));
printf("Size of int: %zu 4 byte(s)\n", sizeof(int));
printf("size of long int: %zu 8 byte(s)\n", sizeof(long int));
printf("size of long long int: %zu 8 byte(s)\n", sizeof(long long int));
printf("size of float: %zu 4 byte(s)\n", sizeof(float));
return (0);
}
