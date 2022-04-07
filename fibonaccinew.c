#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,i,a=0,b=1,c=0;
     printf("Enter the no."); 
     scanf("%d",&n);
     printf("%d %d",a,b);
     c=a+b;
     for(i=3;i<=n;i++)
     {
         
         printf(" %d ",c);
         a=b;
         b=c;
         c=a+b;
     }
     getch();
}

