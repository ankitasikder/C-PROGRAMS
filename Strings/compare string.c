#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     char x[10],y[10];
     int i,len,len1,f=0;
     printf("Enter the 1st name->");
     gets(x);
     len=strlen(x);
     printf("Enter the 2nd name->");
     gets(y);
     len1=strlen(y);
     for(i=0;i<len,i<len1;i++)
     {
             if(x[i]==y[i])
             {
                 f=1;
                 break;
             }
     }
     if(f==1)
     printf("String matched!");
     else
     printf("String not matched!");
     getch();
}
