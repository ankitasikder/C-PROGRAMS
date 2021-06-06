//magic no.
#include<Stdio.h>
#include<conio.h>
void main()
{
     int s=0,n,rem=0,s1=0;
     printf("Enter the no.-->");
     scanf("%d",&n);
     while(n!=0)
     {
        rem=n%10;
        s=s+rem;
        n=n/10;
     }
     while(s!=0)
     {
       rem=s%10;
       s1=s1+rem;
       s=s/10;
     }
     if(s1==1)
     printf("magic no.");
     else
     printf("not magic no.");
     getch();
}
