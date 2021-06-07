#include<stdio.h>
void main()
{
     const char *week[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
     int n,i;
     printf("Enter the number of day-->");
     scanf("%d",&n);
     if(n>0 && n<=7)
     printf("%s",week[n-1]);
     else
     printf("NA");
     getch();
}