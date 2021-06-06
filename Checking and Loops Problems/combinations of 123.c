//WAP to print all the possible combinations of 1,2,3
#include<Stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     for(a=1;a<=3;a++)
     {
            for(b=1;b<=3;b++)
            {
                    for(c=1;c<=3;c++)
                    {
                              if(a!=b && b!=c && c!=a)
                              printf("%d %d %d\n",a,b,c);
                    }
            }
     }
getch();
}
