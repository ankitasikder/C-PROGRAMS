#include<Stdio.h>
#include<conio.h>
void main()
{
      int i,n,p=1;
      printf("Enter the range-->");
      scanf("%d",&n);
      for(i=1;i<=n;i=i*3)
      {
              p=p*i;
              printf("%d+",i);
      }
      printf("=%d",p);
      getch();
}
