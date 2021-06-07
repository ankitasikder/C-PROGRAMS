//check grater no.
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void great();//declaration
void main()
{
     great();//calling
     getch();
}
void great()//definition
{
     int a,b;
     printf("Enter the 2 numbers-->");
     scanf("%d %d",&a,&b);
     if(a>b)
     printf("1 st no. %d is greater",a);
     else if(a==b)
     printf("both equal");
     else
     printf("2 nd no. is greater",b);    
}
