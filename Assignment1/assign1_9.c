#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter the value in farenheit \n");
    scanf("%f",&f);
    c= (float)5/9 *(f-32);
    printf("The Celsius conversion is= %f", c);
    printf("\nEnter the value in Celsius  ");
    scanf("%f",&c);
    f= (float)c*9/5 +32;
    printf("\nFarenheit value is %f",f);


    return 0;


}
