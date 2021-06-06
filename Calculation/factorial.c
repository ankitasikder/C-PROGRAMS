//WAP to print factorial
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,f=1;
     printf("Enter the no.");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       f=f*i;
     }
     printf("The factorial is %d",f);
     getch();
}
