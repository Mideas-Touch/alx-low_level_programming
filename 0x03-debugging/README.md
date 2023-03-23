# 0x03-debugging

- Task 0- **Multiple mains** 
	* main file is a test for a postitive_or_negative() function
	```
		#ifndef MAIN_H
		#define MAIN_H

		#include <stdio.h>

		void positive_or_negative(int i);

		#endif /* MAIN_H */

	```

- Task-1 - **LIke, comment, and subscribe**
	```
		#include <stdio.h>

		/**
		* main - causes an infinite loop
		* Return: 0
		*/

			int main(void)
			{	
			        int i;

			        printf("Infinite loop incoming :(\n");

			        i = 0;

			        while (i < 10)
        			{
		                	putchar(i);
        			}

		        	printf("Infinite loop avoided! \\o/\n");

		        return (0);
			}
	```
	* Expected output:
		Infinite loop incoming :(
		Infinite loop avoided! \o/

- Task 2- **0 > 972?**
	* main.c
		```
			#include <stdio.h>
			#include "main.h"

			/**
			* main - prints the largest of 3 integers
			* Return: 0
			*/

			int main(void)
			{
			        int a, b, c;
			        int largest;

			        a = 972;
			        b = -98;
			        c = 0;

			        largest = largest_number(a, b, c);

			        printf("%d is the largest number\n", largest);

			        return (0);
			}
		```

- tASK 3- **Leap year** - converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
	# 3-main_a.c

	```
		#include <stdio.h>
		#include "main.h"

		/**
		* main - takes a date and prints how many days are left in the year, taking
		* leap years into account
		* Return: 0
		*/

		int main(void)
		{
		    int month;
		    int day;
		    int year;

		    month = 4;
		    day = 01;
		    year = 1997;

		    printf("Date: %02d/%02d/%04d\n", month, day, year);

		    day = convert_day(month, day);

		    print_remaining_days(month, day, year);

		    return (0);
		}		
	```

	# 3-convert-_day.c

	```
		#include "main.h"

		/**
		* convert_day - converts day of month to day of year, without accounting
		* for leap year
		* @month: month in number format
		* @day: day of month
		* Return: day of year
		*/

			int convert_day(int month, int day)
			{
			    switch (month)
			    {
			        case 2:
			            day = 31 + day;
			            break;
			        case 3:
			            day = 59 + day;
			            break;
			        case 4:
			            day = 90 + day;
        			    break;
			        case 5:
			            day = 120 + day;
			            break;
			        case 6:
			            day = 151 + day;
			            break;
			        case 7:
			            day = 181 + day;
			            break;
			        case 8:
			            day = 212 + day;
			            break;
			        case 9:
			            day = 243 + day;
			            break;
			        case 10:
			            day = 273 + day;
			            break;
        			case 11:
			            day = 304 + day;
			            break;
			        case 12:
			            day = 334 + day;
			            break;
			        default:
			            break;
    			}
			    return (day);
		}
	```


# 3-print_remaining_days.c

	```
		#include <stdio.h>
		#include "main.h"

		/**
		* print_remaining_days - takes a date and prints how many days are
		* left in the year, taking leap years into account
		* @month: month in number format
		* @day: day of month
		* @year: year
		* Return: void
		*/

		void print_remaining_days(int month, int day, int year)
		{
		    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
		    {
		        if (month >= 2 && day >= 60)
		        {
		            day++;
        		}

		        printf("Day of the year: %d\n", day);
		        printf("Remaining days: %d\n", 366 - day);
		    }
		    else
		    {
		        if (month == 2 && day == 60)
		        {
		            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		        }
		        else
		        {
		            printf("Day of the year: %d\n", day);
		            printf("Remaining days: %d\n", 365 - day);
       			 }
    			}
		}
	```

	* Fix the print_remaining_days() function so that the output works correctly for all dates and all leap years.
	* assume that all test cases have valid months (i.e. the value of month will never be less than 1 or greater than 12) and valid days (i.e. the value of day will never be less than 1 or greater than 31).
	*  assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).
	
