#include<Stdio.h>
#include<conio.h>
void main()
{
     int i,n;
     printf("Enter the number=");
     scanf("%d",&n);
     for(i=2;i<=n-1;i++)
     {
                        if(n%i==0)
                        {
                                            i=i%10;
                                            printf("%d ",i);
                                            
                        }
                        
     } 
getch();
}
