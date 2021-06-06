#include<Stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the no.");
    scanf("%d",&a);
    if(a>0)
    printf("a is positive no. %d"&a);
    else if(a==0)
    printf ("a is 0 %d",0);
    else
    printf("a is negative %d",-a);
    getch();
}
