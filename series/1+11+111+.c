//wap to print 1+11+111+....+n
#include<Stdio.h>
#include<conio.h>
void main()
{
   int i,n,s=0;
   printf("Enter the range");
   scanf("%d",&n);
   for (i=1;i<=n;i=(i*10)+1)
   {
       s=s+i;
       printf("%d+",i);
   }
   printf("=%d",s);
   getch();
}
