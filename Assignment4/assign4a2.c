#include<stdio.h>

void power()
{

	int n,index,pow=1;
	printf("enter the number\n and its index\n");
	scanf("%d%d",&n,&index);

	for(int i=1;i<=index;i++){
		pow = pow*n;
	}
	printf("Number is %d with index %d ,result %d\n",n,index,pow);

}


int main()
{

	power();

	return 0;
}
