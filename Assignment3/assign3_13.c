#include <stdio.h>


int main()

{
	int num, num1=0,num2=1,num3;
printf("Enter a number\n");
scanf("%d",&num);
printf("%d,",num2);
for(int i=2;i<=num;i++)

{
num3 = num1 +num2;
printf("%d",num3);
num1 = num2;
num2 = num3;
if(i<num)
{
printf(",");
}
}

return 0;
}
