#include<stdio.h>

int main()

{

int num,fact=1;
printf("Enter a number\n");
scanf("%d",&num);

for(int i=1;i<=num;i++){
fact = fact * i;
if(i!=1)
printf(" * ");
 printf("%d",i);
}
printf("=%d\n",fact);
return 0;
}
