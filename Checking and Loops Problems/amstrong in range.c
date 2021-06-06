//Amstrong number within range
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
       int n1,n2,i,temp,num,rem;
       printf("Enter two numbers(intervals):");
       scanf("%d %d",&n1,&n2);
       printf("Amstrong number between %d and %d are:",n1,n2);
       for(i=n1+1;i<n2;i++)
       {
                 temp=i;
                 num=0;
                 while(temp!=0)
                 {
                               rem=(temp%10);
                               num+=rem*rem*rem;
                               temp/=10;
                 }
                 if(i==num)
                 {
                           printf(" %d ",i);
                 }
       }
       getch();
}
