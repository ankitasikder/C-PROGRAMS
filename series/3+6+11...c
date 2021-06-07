#include<Stdio.h>
#include<conio.h>
void main()
{
    int i,n,s=0,s1=0;
    printf("Enter the range-->");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
              s1=((i*i)+2);
              s=s1+s;
              printf("%d+ ",s1);
    }
    printf("=%d",s);
    getch();
}
