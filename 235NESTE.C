/* to check whether a  */
#include<stdio.h>
#include<conio.h>
void main()
{
int m;
clrscr();
printf("Enter a Month Number: ");
scanf("%d",&m);
if(m==1)
{
printf("31 Days");
}
else if(m==2)
{
printf("28/29 Days");
}
else if(m==3)
{
printf("31 Days");
}
else if(m==4)
{
printf("30 Days");
}
else if(m==5)
{
printf("31 Days");
}
else if(m==6)
{
printf("30 Days");
}
else if(m==7)
{
printf("31 Days");
}
else if(m==8)
{
printf("31 Days");
}
else if(m==9)
{
printf("30 Days");
}
else if(m==10)
{
printf("31 Days");
}
else if(m==11)
{
printf("30 Days");
}
else if(m==12)
{
printf("31 Days");
}
else
{
printf("Invalid Input, Please Try Again.");
}
getch();
}