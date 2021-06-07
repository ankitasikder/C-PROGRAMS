//Rank of a number
#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,sum=0,rem=0,rem1=0,sum1=0;
     printf("Enter a number-->");
     scanf("%d",&n);
     for(;n!=0;n=n/10)
     {
              rem=n%10;
              sum=sum+rem;
     }
     for(;sum!=0;sum=sum/10)
     {
              rem1=sum%10;
              sum1=sum1+rem1;
     }
     printf("%d",sum1);
              
getch();
}
