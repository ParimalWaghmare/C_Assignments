#include<stdio.h>

int main()

{
int num;
char c;

printf("Enter a number\n ");
scanf("%d",&num);
printf("Enter a character\n");
scanf(" %c",&c);

for (int i=0;i<num;i++)
{
printf("%c",c);
}



return 0;
}
