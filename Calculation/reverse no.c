//Reverse of a no.
#include<Stdio.h>
#include<conio.h>
void main()
{ 
     int n,rem=0;
     printf("Enter the no.::");
     scanf("%d",&n);
     for(;n!=0;n=n/10)
     {
              rem=n%10;
              printf("%d",rem);
     }
getch();
}
