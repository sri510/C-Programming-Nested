/* to check whether a character is uppercase or lowercase */
#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter a character to check: ");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')
{
printf("%c is Uppercase Alphabet.",ch);
}
else if(ch>='a'&&ch<='z')
{
printf("%c is Lowercase Alphabet.",ch);
}
else
{
printf("%c is not an Alphabet.",ch);
}
getch();
}
