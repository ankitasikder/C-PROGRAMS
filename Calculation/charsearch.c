//wap to count a particular character in a given string
#include<stdio.h>
#include<conio.h>
void main()
{
 char a[20],ch;
 int i,v=0;
 printf("Enter the String=");
 gets(a);
 printf("Enter the character you want to search=");
 scanf("%c",&ch);
 for(i=0;a[i]!='\0';i++)
 {
   if(ch==a[i])
    v++;
 }
 printf("Present =%d",v);
 getch();
}
