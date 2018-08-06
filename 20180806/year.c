#include "stdio.h"

int isLeapYear(int year)
{
	if(year%4==0) {
		if(year%100==0) {
			if(year%400==0) {
				return 1;
			}
			else {
				return 0;
			}
			
		} else {
			return 1;
		}
		
	} else {
		return 0;
	}
}

int main()
{
	int year;

	printf("Enter any year:");

	scanf("%d", &year);

	if(isLeapYear(year)==1) {

		printf("%d is leap year!\n",year);

	}
	else {

		printf("%d is not leap year!\n",year);

	}

	return 0;
}


