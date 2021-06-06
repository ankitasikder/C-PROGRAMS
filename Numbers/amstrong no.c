//amstrong no
#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,rem=0,s=0,d;
     printf("Enter the no-->");
     scanf("%d",&n);
     d=n;
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+(rem*rem*rem);//s=s
     }
     if(s==d)
     printf("Amstrong no.");
     else
     printf("not Amstrong no");
     getch();
}
     


