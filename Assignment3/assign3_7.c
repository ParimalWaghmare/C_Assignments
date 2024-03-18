#include<stdio.h>

int main()
{
int num,i;
printf("enter a number\n");
scanf("%d",&num);

for(i=1;i<=num/2;i++){
if(num%i==0)
{
printf("%d * %d = %d  ",i,num/i,num);
}
}


}
