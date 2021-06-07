#include<Stdio.h>

void main()
{
     int a[9]={2000,500,200,100,50,20,10,2,1},amt,temp,i;
     printf("Enter the the amount-->");
     scanf("%d",&amt);
     temp=amt;
     for(i=0;i<=8;i++)
     {
             printf("\n\n %d present in this amount %d \n\n",a[i],temp/a[i]);
             temp=temp%a[i];
     }
getch();
}
