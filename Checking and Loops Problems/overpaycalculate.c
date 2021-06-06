#include<Stdio.h>
#include<conio.h>
void main()
{
     int hr,i,count=0,pay;
     printf("Enter number of hour=");
     scanf("%d",&hr);
     for(i=hr;i>40;i--)
     {
              count++;
              pay=count*12;
     }
     printf("over pay=%d",pay);
                       
getch();
}
