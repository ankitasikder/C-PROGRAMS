//two+three series
#include<Stdio.h>
#include<conio.h>
void main()
{
    int n,a=2,s=0,t=0;
    printf("Enter the range-->");
    scanf("%d",&n);
    for(;a<=n;a=a+3)
    {
       s=s+a;
       printf(" %d +",a);
    }
    printf("%d",s);
getch();
}
