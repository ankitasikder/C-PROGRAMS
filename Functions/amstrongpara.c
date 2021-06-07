//amstrong no
#include<Stdio.h>
#include<conio.h>
void ams();
void main()
{
     int x;
     printf("Enter the no-->");
     scanf("%d",&x);
     ams(x);
     getch();
}
void ams(int n)
{
     int rem=0,s=0,d;
     d=n;
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+(rem*rem*rem);
     }
     if(s==d)
     printf("Amstrong no.");
     else
     printf("not Amstrong no");
}
     


