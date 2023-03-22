#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p[] = "_putchar";
	int i;

	for (i = 0 ; i < 9 ; i++)
		_putchar(p[i]);
	_putchar('\n');
	return (0);
}
