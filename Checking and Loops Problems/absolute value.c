//absolute value of a number
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i;
     printf("Enter the number=");
     scanf("%d",&i);
     if(i<0)
     {
            i=(-1)*i;
            printf("Absolute value=%d",i);
     }
     else
     {
         printf("Absolute value=%d",i);
     }
         
getch();
}
