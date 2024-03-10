#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,s, area,peri;
printf("Enter the sides of the triangle\n");
scanf("%f%f%f",&a,&b,&c);

peri= (a+b)+(c*a)+(b+c);

s = (a+b+c)/2;
area= sqrt(s*(s-a)*(s-b)*(s-c));

printf("Perimeter of the triangle = %f\n",peri);
printf("Area of the triangle is =%f\n",area);


return 0;

}
