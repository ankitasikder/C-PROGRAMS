//1/factorialseries
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
