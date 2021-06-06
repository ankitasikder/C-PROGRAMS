//WAp to check perfect no.
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,s=0;
     printf("Enter the no.-->");
     scanf("%d",&n);
     for (i=1;i<n;i++)
     {
         if (n%i==0)
         s=s+i;
     }
     if(s==n)
     printf("perfect no.");
     else 
     printf("not  perfect no.");
     getch();
}
