//GCD or HCF of two numbers
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a,b,i,hcf=1,min;
     printf("Enter two integers=");
     scanf("%d %d",&a,&b);
     min=(a<b)?a:b;
     for(i=1; i<=min ;i++);
     {
                  if(a%i==0 && b%i==0)
                  hcf=i;
     }
     printf("HCF of %d and %d is %d",a,b,i);
     getch();
}
