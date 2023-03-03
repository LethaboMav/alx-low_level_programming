#include <stdio.h>

/**
 * _strncat - It concatenates two strings copying at most n bytes from src.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: 0 ALways
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		dest_len++;
		j++;
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
