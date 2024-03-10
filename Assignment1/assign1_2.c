//Q.  Write a program to accept a number and print the number in character, decimal, octal and hex
//        formats.



#include<stdio.h>

int main()
{

int num;
printf("Enter the number \n");
scanf("%d",&num);

printf("Number in Character= %c \n ",num);
printf("Number in Decimal= %d \n",num);
printf("Number in Octal= %o \n", num);
printf("Number in Hex= %x \n",num);


return 0;
}
