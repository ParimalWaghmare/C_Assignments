#include<stdio.h>


void fact()

{

	int fact=1,n;

	printf("Enter a number\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		fact *=i;

	}
	printf("Factorial is %d",fact);


}

int main(){

	fact();

	return 0;
}
