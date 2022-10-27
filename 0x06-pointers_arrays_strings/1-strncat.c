#include "main.h"

/**
<<<<<<< HEAD
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
=======
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 * 
 * Return: A pointer to the resulting string dest
 */
>>>>>>> d175eca0ca7c252974f93ffb6c8a3d57958fb1b5
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

<<<<<<< HEAD
	dest[dlen + n + 1] = '\0';

	return (dest);
}
=======
		dest[dlen + n + 1] = '\0';

		return (dest);
}

>>>>>>> d175eca0ca7c252974f93ffb6c8a3d57958fb1b5
