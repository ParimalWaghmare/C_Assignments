#include<stdio.h>

int main()
{
    int n,n1,n2,n3,n4;
    printf("Enter the Number\n");
    scanf("%d",&n);

    n1=n%10;
    n=n/10;

    n2=n%10;
    n=n/10;

    n3=n%10;
    n=n/10;

    n4=n%10;
    n=n%10;

    printf("%d \t %d \t %d \t %d \t",n4,n3,n2,n1);

    printf("%d %d %d %d ",n4*1000,n3*100,n2*10,n1*1);

    printf("\n%d %d %d %d",n1,n2,n3,n4);





}
