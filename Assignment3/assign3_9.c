#include<stdio.h>

int main()

{

int num1, num2,res;
printf("Enter two number\n ");
scanf("%d%d",&num1, &num2);

while(num2!=0)
{
res =num1%num2;
num1=num2;
num2=res;

}
printf("GCD number is %d ",num1);

return 0;
}
