#include<stdio.h>

int main()


{
	int num,temp,rem=0,rev=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;

	while(num!=0){
		rev = num % 10;
		rem= rem*10 + rev;
		num /=10;

	}

	if(temp==rem)
	{
		printf("This number is a Palindrome Number\n%d",temp);
	}

	else
	{
		printf("This number is Not a Palindrome Number\n%d",temp);
	}

	return 0;

}
