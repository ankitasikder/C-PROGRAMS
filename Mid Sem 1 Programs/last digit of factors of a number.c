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
