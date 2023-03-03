#include <stdio.h>
#include <string.h> 

/**
 * main - Entry point
 *
 * Return: 0 Always
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int a;
	
	for(i = 0; dest[i] != '\0'; i++)
	{
		;
	}

	for(a = 0; src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}
	
	return (dest);
}
