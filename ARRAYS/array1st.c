/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
void main()
{
      int a[1],i,n;
      printf("Enter the range:");
      scanf("%d",&n);
      //input array
      for(i=0;i<n;i++)
      {
                      printf("Enter the no.=");
                      scanf("%d",&a[i]);
      }
      //print aray
      for(i=0;i<n;i++)
      {
                     printf("The position is a[%d]=%d\n",i,a[i]);
      }
getch();
}
