//WAP to print i's value runtime even no.
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     printf("Enter the range-->");
     scanf("%d",&n);
     for (i=1;i<=n;i=i+3)
     {
         printf("i's value=%d\n",i);
     }
     getch();
}
