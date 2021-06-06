//Write a C program that will be used to find 
#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,calc,calc1;
     printf("Enter the n th term of addition=");
     scanf("%d",&n);
     calc=(n*(n+1));
     calc1=(calc/2);
     printf("Addition result is-->(0+...+%d)-->%d",n,calc1);
     getch();
}
