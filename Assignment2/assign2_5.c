#include<stdio.h>

int main()

{
/*
	int a,b,c;
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greatest number \n",a);
	}
	else if(b>a && b>c)
	{
		printf("%d is greatest number\n ",b);
	}

	else
		printf("%d is the greatest number\n ",c);


*/

int a,b,c,max;
printf("Enter three numbers\n ");
scanf("%d %d %d",&a, &b, &c);

max= (a>b) ? (a>c ? a:c) :(b>c ? b:c);
printf("Greatest number is %d\n",max);

return 0;










	return 0;

}
