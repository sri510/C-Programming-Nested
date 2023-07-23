/* to print day mane of week */
#include<stdio.h>
#include<conio.h>
void main()
{
int w;
clrscr();
printf("Enter a week number: ");
scanf("%d",&w);
if(w==1)
{
printf("Monday");
}
else if(w==2)
{
printf("Tuesday");
}
else if(w==3)
{
printf("Wednesday");
}
else if(w==4)
{
printf("Thursday");
}
else if(w==5)
{
printf("Friday");
}
else if(w==6)
{
printf("Saturday");
}
else if(w==7)
{
printf("Sunday");
}
else
{
printf("Invailid Input, Please Try again: ");
}
getch();
}

