#include<stdio.h>


int main ()
{

float a,b, res;
printf("Enter the numbers to divide");
scanf("%f%f",&a,&b);

if(b==0)

printf("Not divided by zero ");

else
res=a/b;
printf("%f / %f =%f",a,b,res);

return 0;

}

