#include<stdio.h>

int main()

{
int num,i=0;
char c;

printf("Enter a number\n ");
scanf("%d",&num);
printf("Enter a character\n");
scanf(" %c",&c);

while(i<num)
{
printf("%c",c);
i++;
}



return 0;
}
