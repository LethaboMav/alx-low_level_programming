#include "main.h"

/**
 *
 *
 *
 */

int _strcmp(char *s1, char *s2)
{
  int i;

  for (i = 0; s1[i] == s2[i]; i++)
    if (s1[i + 1] == '\0')
      return (s1[i] - s2[i]);
  
  return (s1[i] - s2[i]);
}




  















