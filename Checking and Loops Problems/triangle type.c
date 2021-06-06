//which triangle checking
#include<Stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     int a,b,c,r;
      printf("Enter the three sides-->");
     scanf("%d %d %d",&a,&b,&c);
     if(a==b && b==c && c==a)
     printf("\n\tEquilateral triangle");
     else if(a==b || b==c || c==a)
     printf("\n\tIsoceles triangle");
     else if(c==(sqrt(pow(a,2))+(pow(b,2))) || b==(sqrt(pow(c,2))+(pow(a,2))) || a==(sqrt(pow(b,2))+(pow(c,2)))) 
     printf("\n\tRight angle triangle");
     else
     printf("\n\tScalene triangle");
getch();
}
