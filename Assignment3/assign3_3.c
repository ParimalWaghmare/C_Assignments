#include <stdio.h>

int main() {
	int num, sum = 0 ,rem, rev =0,org_num;
	printf("Enter a number: ");
	scanf("%d", &num);


org_num=num;


	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}


	printf("Sum of digits: %d\n", sum);

num=org_num;

  while (num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    printf("Reverse number is: %d\n", rev);

 	num = org_num;
	rev = 0;

 	while(num>0)

 	{	
	rem = num%10;
	rev = rev *10 +rem;
	num /=10;

 	}	
	if(org_num==rev){
	printf("This is a Palindrome number\n");
	}else{
	printf("This is not a Palindrome number\n");
	}
    
	num = org_num;
	rem =0;
	sum =0;

	while(num>0)
	{
 	rem = num%10;
	sum = sum + (rem * rem * rem);
	num/=10;
	}
	if(sum==org_num){
	printf("It is a Armstrong number\n");
	}else{
	printf("It is not a Armstrong number\n");
	}
return 0;
	}
