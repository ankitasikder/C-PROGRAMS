//check collinearity
#include<Stdio.h>
#include<conio.h>
void main()
{
     int x1,x2,x3,y1,y2,y3,slope1,slope2;
     printf("\nEnter the 1st co-ordinate(x1,y1)");
     scanf("\n %d %d",&x1,&y1);
     printf("\nEnter the 2nd co-ordinate(x2,y2)");
     scanf("\n %d %d",&x2,&y2);
     printf("\nEnter the 3rd co-ordinate(x3,y3)");
     scanf("\n %d %d",&x3,&y3);
     slope1=(y2-y1)/(x2-x1);
     slope2=(y3-y2)/(x3-x2);
     if(slope1==slope2)
     {
           printf("3 points fall in same straight line");
     }
     else
     {
           printf("3 points don't fall in same straight line");
     }    
getch();
}
