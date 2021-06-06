#include<Stdio.h>
#include<conio.h>
void main()
{
     int a;
     printf("Enter the no.");
     scanf("%d",&a);
     if(a>0)
     printf("a is a positive no.%d",a);
     else if (a==0)
     printf("a is %d",a);
     else 
     printf ("a is a negative no.%d",a);
     getch();
}
