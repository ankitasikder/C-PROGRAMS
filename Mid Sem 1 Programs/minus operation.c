#include<Stdio.h>
#include<conio.h>
void main()
{
     int x,y;
     printf("Enter two numbers:");
     scanf("%d %d",&x,&y);
     while(x!=y)
     {
           if(x>y)
             x-=y;
           else
             y-=x;
             printf("x=%d y=%d\n",x,y);
     }
     printf("%d\n",x);
getch();
}
