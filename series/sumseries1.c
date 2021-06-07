#include<Stdio.h>
#include<conio.h>
void main()
{
      int i,n,s=0;
      printf("Enter the range-->");
      scanf("%d",&n);
      for(i=n;i>=1;i=i-2)
      {
              s=s+i;
              printf("%d+",i);
      }
      printf("=%d",s);
      getch();
}
