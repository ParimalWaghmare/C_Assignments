#include<stdio.h>

int main()
{
	int num ;
	printf("Enter the number\n");
	scanf("%d",&num);

	if(num%2==0)
		printf("number is even\n",num);
	else
		printf("number is odd\n",num);

	return 0;
}
