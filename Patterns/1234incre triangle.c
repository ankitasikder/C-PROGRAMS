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
   int n,c,d,num=1,space;
   printf("Enter the number of rows->");
   scanf("%d",&n);
   space=n-1;
   for(d=1;d<=n;d++)
   {
      num=d;
      for(c=1;c<=space;c++)
      {
         printf(" ");
      }
      space--;
      for(c=1;c<=d;c++)
      {
          printf("%d",num);
          num++;
      }
      num--;
      num--;
      for(c=1;c<d;c++)
      {
          printf("%d",num);
          num--;
      }
      printf("\n");
   }
   getch();
}
