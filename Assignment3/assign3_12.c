#include<stdio.h>


int main()

{
int base,index,res=1;

printf("enter base and index\n");
scanf("%d%d",&base,&index);

for(int i=1;i<=index;i++)
{
res = res * base;
}
printf("Power is %d",res);
return 0;

}
