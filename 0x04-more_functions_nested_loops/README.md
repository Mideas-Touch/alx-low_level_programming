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

- 1. isdigit -Write a function that checks for a digit (0 through 9).
	* Prototype: int _isdigit(int c);
	* Returns 1 if c is a digit
	* Returns 0 otherwise
	## 1-main.c

		```
			#include "main.h"
			#include <stdio.h>

			/**
			 * main - check the code
 			*
			 * Return: Always 0.
			 */
			int main(void)
			{
			    char c;

			    c = '0';
			    printf("%c: %d\n", c, _isdigit(c));
			    c = 'a';
			    printf("%c: %d\n", c, _isdigit(c));
			    return (0);
			}
		```

- 2. Collaboration is multiplication -Write a function that multiplies two integers.
	* Prototype: int mul(int a, int b);
	## 2-main.c
		```
			#include "main.h"
			#include <stdio.h>

			/**
			 * main - check the code
			 *
			 * Return: Always 0.
			 */
			int main(void)
			{
			    printf("%d\n", mul(98, 1024));
			    printf("%d\n", mul(-402, 4096));
			    return (0);
			}
		```
