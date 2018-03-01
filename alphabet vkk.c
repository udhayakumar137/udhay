#include<stdio.h>
int main()
{
char x;
printf("enter a character");
scanf("%C",&x);
if( (x>='a' && x<='z') || (x>='A' && x<='Z'))
printf("%x is an alphabet.",x);
else
printf("%x  is not an alphabet.",x);
return (0);
}
