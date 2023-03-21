#include "main.h"
#include <stddef.h>

/**
 */

char *_strstr(char *haystack, char *needle)
{
  char *ptr;
  char *mtc;

  while (*haystack)
    {
      ptr = haystack;
      for (mtc = needle; *ptr && *mtc && (*ptr == *mtc); ptr++, mtc++)
	;
      if (*mtc == '\0')
	return (haystack);
      haystack++;
    }
  return (NULL);
}
