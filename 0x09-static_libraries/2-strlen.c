#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
/* initialize the length variable to 0 */
	int length = 0;

	while (*s != '\0')
		length++;
	s++;

	return (length);
}
