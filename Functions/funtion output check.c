/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
int check(int);
int main()
{
     int i=45,c;
     c=check(i);
     printf("%d\n",c);
     getch();
     return 0;
}
int check(int ch)
{
    if(ch>=45)
      return(100);
    else
      return(10*10);
}
