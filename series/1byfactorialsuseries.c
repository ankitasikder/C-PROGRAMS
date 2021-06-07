//1/factorialseries
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,s=0,f=1;
     printf("Enter the range");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
            f=f*i;
            s=s+f;
            printf("1/%d+ ",f);
     }
     printf(" =1/%d",s);
     getch();
}
