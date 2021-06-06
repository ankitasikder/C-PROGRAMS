//check leap year 
#include<Stdio.h>
#include<conio.h>
void main()
{ 
      int Y;
      printf("Enter the year");
      scanf("%d",& Y);
      (Y%4==0 && Y%100!=0)?printf("leap year"):printf("Not leap year");
      getch();
}
