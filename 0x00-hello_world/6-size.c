#include <stdio.h>
/**
 * main - A program that prints various computer types
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu byte(s)\n", (unasigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", (unasigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unasigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", (unasigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unasiged long)sizeof(f));
	return (0);
}

