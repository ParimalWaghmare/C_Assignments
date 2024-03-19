#include<stdio.h>
#include<math.h>

	void printPrimeFactors(int n) {
    int i, count;
    printf("%d = ", n);
    for (i = 2; i <= n; i++) {
        count = 0;
        while (n % i == 0) {
           
            printf("%d ", i);
           	
			count++;
            n = n / i;
	     
		 if(n!=1){
		printf("*");
		 }
        }

	
    }
}

int main() {
    int number = 180;
    printPrimeFactors(number);
    return 0;
}


