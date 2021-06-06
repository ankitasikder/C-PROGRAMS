//no outputXXXXXXX
#include<Stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int n,i,a,sum=0;
     printf("Enter the number=");
     scanf("%d",&n);
     for(i=1;i<=7;i++)
     {
             a=pow(((n-1)/n),i);
             printf("%d/%d+ ",a);
             sum=sum+a;
     }
     printf("=%d/%d",sum);
getch();
}
