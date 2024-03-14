#include<stdio.h>

int main()

{
int num1,num2;
char ch;

printf("Enter the numbers\n");
scanf("%d%d",&num1,&num2);

printf("Enter the operator(+,-,*,/)\n ");
scanf("%*c%c",&ch);

switch(ch)

{
case '+': printf("Addition of num1=%d + num2=%d = %d\n",num1,num2,num1 + num2);
			break;

 case '-':printf("Subtraction of num1=%d - num2=%d = %d\n",num1,num2,num1 - num2);
 			break;

 case '*':printf("Multiplication of num1=%d * num2=%d =%d\n", num1,num2, num1 * num2);
 		 break;

 case '/':if(num2!=0)
 			printf("Division of num1=%d * num2=%d = %f\n",num1,num2, (float)num1 / num2);
			
			else
			printf("Division not possible by 0");
          
		  break;
 default:printf("enter the correct operator\n");
 	
		  break;
}
return 0;
}
