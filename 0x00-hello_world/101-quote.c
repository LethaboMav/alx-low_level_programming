#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: 1 Always
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	
	write(2, "\n", 1);	
	
	return (1);
}   
