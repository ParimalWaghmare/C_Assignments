
/*3. Print the ASCII value of user entered character in decimal, hex, octal format and also print the
character for user entered ASCII value.*/


#include <stdio.h>

int main()
{

char num;
printf("Enter the ASCII value \n ");
scanf("%c",&num);

printf("ASCII value in Decimal %d\n",num);
printf("ASCII value in hex %x\n",num);
printf("ASCII value in octal %o\n",num);
printf("ASCII value in Character %c\n",num);

return 0;

}
