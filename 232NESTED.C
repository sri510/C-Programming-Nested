/* to check whether a number is divisible by 5 and 11 or not */
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a Number: ");
scanf("%d",&n);
if((n % 5 == 0) && (n % 11 == 0))
{
printf("Number is divisible by 5 & 11");
}
else
{
printf("Number is not divisible by 5 & 11");
}
getch();
}

