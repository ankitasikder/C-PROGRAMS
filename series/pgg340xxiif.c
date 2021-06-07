//1/factorialseries
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
     int i,n,s=0,j=1;
     printf("Enter the range-->");
     scanf("%d",&n);
     for(i=1;i<=n;i=i+2)
     {
            s=s+i;
            printf("%d/%d! ",j,i);
            j++;
     }
     printf(" =%d/%d",s);
     getch();
}
