#include<Stdio.h>
void main()
{
      printf("Enter the number-->");
      prime_factors();
      getch();
}
prime_factors()
{
           int n,i,j;
           scanf("%d",&n);
           for(i=1;i<=n;i++)
           {
                  if(n%i==0)
                  {
                            for(j=2;j<=i-1;j++)
                            {
                                   if(i%j==0)
                                   {
                                             printf("");
                                             break;
                                   }
                                   else
                                   {
                                       printf("%d, ",i);
                                   }
                            }
                  }
           }
           return i;
}
           
