#include<stdio.h>

int main()
{

	//printf("*\n");
	//printf("**\n");
	//printf("***\n");
	//printf("****\n");
	//printf("*****\n");


	int n=5;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++){
			printf("*");
		}
		printf("\n");
	}


	return 0;

}
