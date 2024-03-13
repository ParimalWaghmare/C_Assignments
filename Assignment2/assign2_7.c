
/* #include <stdio.h>

   int main() {
   int year;

   printf("Enter the year: ");
   scanf("%d", &year);

   if (year % 4 == 0) {
   if (year % 100 == 0) {
   if (year % 400 == 0) {
   printf("%d is a Leap year\n", year);
   } else {
   printf("%d is not a Leap year\n", year);
   }
   } else {
   printf("%d is a Leap year\n", year);
   }
   } else {
   printf("%d is not a Leap year\n", year);
   }

   return 0;
   }

 */



#include<stdio.h>


int main()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);

	if(year % 4==0 )
	{
	if(year % 400==0 || year % 100!=0)
	{
	printf("It is a Leap year\n",year);
	}
	     else
	{
		printf("It is a Leap year\n");
	}
	}
	else
	{
		printf("Not a Leap year\n");
	}

	

return 0;
}
