//power one number on another
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,j,ans=1;
     printf("Enter the number on which power is put=");
     scanf("%d",&i);
     printf("Enter the power=");
     scanf("%d",&n);
     for(j=1;j<=n;j++)
     {
                      ans=i*ans;
     }
     printf("The result is=%d",ans);
     getch();
}
