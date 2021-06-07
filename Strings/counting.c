//counting space,char,line
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1];
     int i,lc=0,sc=0,cc=0;
    printf("Enter the text-->");
    gets(a);
    for(i=0;i!='\0';i++)
    {
         if(a[i]==' ')
         sc=sc++;
    
    }
    printf("space count-->%d",sc);
     for(i=0;i!='\0';i++)
    {
         if(a[i]!=' ')
         cc=cc++;
    
    }
    printf("char-->%d",cc);
      for(i=0;i!='\0';i++)
    {
         if(a[i]==' ')
         lc=lc++;
    
    }
    printf("line count-->%d",lc);
    getch();
}
