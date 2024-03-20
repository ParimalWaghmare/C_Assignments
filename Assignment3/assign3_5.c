#include<stdio.h>

	int main()
	{
	int fact=1,num;
	printf("Enter a number\n");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++){
	fact = fact * i ;
	print("%d",i);

	}
	printf("factorial is %d",fact);

	return 0;

	}


