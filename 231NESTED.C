/* to check whether a char is alphbet or not */
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter Character: ");
scanf(" %c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
printf("Character is Alphabet.");
}
else
{
printf("Character is not Alphabet.");
}
getch();
}
