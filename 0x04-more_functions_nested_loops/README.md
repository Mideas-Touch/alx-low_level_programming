- 0. isupper - Write a function that checks for uppercase character.
	* Prototype: int _isupper(int c);
	* Returns 1 if c is uppercase
	* Returns 0 otherwise
	## 0-main.c
		
		```
			#include "main.h"
			#include <stdio.h>

			/**
			 * main - check the code.
			 *
			 * Return: Always 0.
			 */
			int main(void)
			{
			    char c;

			    c = 'A';
			    printf("%c: %d\n", c, _isupper(c));
			    c = 'a';
			    printf("%c: %d\n", c, _isupper(c));
			    return (0);
			}
		```
