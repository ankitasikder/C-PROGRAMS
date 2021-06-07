#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,i,s=0;
     printf("Enter the range");
     scanf("%d",&n);
     for(i=4;i<=n;i=i*2)
     {
           
           s=s+i;
           printf("%d+ ",i);
     }
     printf(" = %d",s);
getch();
}
