#include<stdio.h>
#include<math.h>


// function to check if a number is prime
int isPrime(int num){
	if(num<=1)
		return 0;
	for(int i=2; i<=sqrt(num); i++){
		if( num % i ==0)
			return 0;
	}
	return 1;


}

// Function to check if a number is Armstrong
int isArmstrong(int num){
	int originalNum, remainder, n=0, result = 0;

	originalNum = num ;
	while(originalNum!=0){
		originalNum/=10;
		++n;
	}
	originalNum = num;
	while (originalNum!=0){
		remainder = originalNum % 10;
		result += pow(remainder,n);
		originalNum/=10;
	}
	if(result == num)
		return 1;
	else return 0;
}

int main(){
	printf("Prime numbers between 1 to 100:\n");
	for(int i=2 ; i<=100;i++){
		if (isPrime(i))
			printf(" %d ",i);

	}
	printf("\n");

	printf("\n Armstrong numbers between 1 to 500:\n");

	for(int i=1;i<=500;i++){
		if(isArmstrong(i))
			printf(" %d ",i);

	}
	printf("\n");
	return 0;
}




