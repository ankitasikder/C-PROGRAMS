//wap to print day as per user choice
#include<Stdio.h>
#include<conio.h>
void day(int);//declaration
void main()
{
     int d;
     printf("Enter the day-->");
     scanf("%d",&d);
     day(d);//calling
     getch();
}
void day(int d)//definition
{
    if(d==1)
    printf("Monday");
    else if(d==2)
    printf("Tuesday");
    else if(d==3)
    printf("Wednwesday");
    else if(d==4)
    printf("Thursday");
    else if(d==5)
    printf("Friday");
    else if(d==6)
    printf("Saturday");
    else if(d==7)
    printf("Sunday");
    else
    printf("NA");
}    
    
    
    
    
    
