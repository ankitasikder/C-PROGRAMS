// multiplication table
#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n,f;
     printf("Enter the no.-->");
     scanf("%d",&n);
     printf("       ===============================\n");
     printf("\t\t MULTIPLICATION TABLE\n");
     printf("       ===============================\n");
     for(i=1;i<=10;i++)
     {
        f=n*i;
        printf("\t%d * %d= %d\n",i,n,f);
     }
     getch();
}
