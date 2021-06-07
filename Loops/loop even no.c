//WAP to print i's value runtime even no.
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     printf("Enter the range-->");
     scanf("%d",&n);
     for (i=2;i<=n;i=i+2)
     {
         printf("i's value=%d\n",i);
     }
     getch();
}
