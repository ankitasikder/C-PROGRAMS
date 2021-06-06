#include<Stdio.h>
#include<conio.h>
void main()
{
    int n,rem=0,s=0,c=0;
     printf("Enter the no-->");
     scanf("%d",&n);
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+rem;
        c++;
     }
     if(s==c++)
     printf("harshad no.");
     else
     printf("not harshad no.");
getch();
}
