//check grater no.
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("Enter the 2 no.");
     scanf("%d %d",&a,&b);
     if(a>b)
     printf("1 st no. %d is greater",a);
     else if(a==b)
     printf("both equal");
     else
     printf("2 nd no. is greater",b);
     
     getch();
}
