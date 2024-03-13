#include<stdio.h>

int main()

{
int point;
printf("Enter the point\n");
scanf("%d",&point);

if(point >=0 && point <=90){
printf("The Point lies in First Quadrant\n",point);
}else if(point >90 && point <=180){
printf("The point lies in Second Quadrant\n",point);
}else if(point > 180 && point <=270){
printf("The point lies in Third Quadrant\n",point);
}else if(point >270 && point <=360){
printf("The point lies in Fourth Quadrant\n",point);
}


return 0;
}
