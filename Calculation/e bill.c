#include<Stdio.h>
#include<conio.h>
void main()
{
     int cno,unit;
     float rs;
     printf("Enter the customer no.");
     scanf("%d",&cno);
     printf("Enter the unit");
     scanf("%d",&unit);
     if(unit>=0 && unit<=200)
     rs=unit*0.50;
     else if(unit>200 && unit<=400)
     rs=((unit-200)*0.65)+100;
     else if(unit>400 && unit<=600)
     rs=((unit-400)*0.85)+230;
     else
     rs=((unit-600)*1.00)+390;
     printf("Your customer no.=%d",cno);
     printf("Your customer unit=%d",unit);
     printf("Your bill amount=%d",rs);
     getch();
}
