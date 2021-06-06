#include<Stdio.h>
#include<conio.h>
void main()
{
     int n,rem=0,s=0,f=1;
     printf("Enter the no=");
     scanf("%d",&n);
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+rem;
        f=f*rem;
        
     }
     if (s==f)
     printf("spy no.");
     else
     printf("not spy no.");
getch();
}
