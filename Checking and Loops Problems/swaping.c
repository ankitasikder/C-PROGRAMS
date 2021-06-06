//swap without 3rd variable
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a,b;
     printf("Enter the two numbers for swapping values=");
     scanf("%d %d",&a,&b);
     a=a+b;
     b=a-b;
     a=a-b;
     printf("\n\n     After swaping\t");
      printf("\nThe first number is=%d",a);
     printf("\nThe second number is=%d",b);
     
      

getch();
}
