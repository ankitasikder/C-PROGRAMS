/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<dos.h>
#include<Stdio.h>
#include<conio.h>
#include<math.h>
#include<windows.h>
#include<time.h>
void main()
{ 
     system ("title ROMI");
     system("color b5");
     int n,rem,i,s=0,s1=0,c=0,d=0,g;
     printf("Enter the no.=");
     scanf("%d",&n);
     
     printf("Enter the Digit=");
     scanf("%d",&c);
     d=n;
     for(;n!=0;n=(n/10))
     {
        rem=n%10;
        s=s+pow(rem,c);
        c--;
     }
        
     for(g=0;g<=100;g++)
     {
                        printf("*");    
     }
        
        if(s==d)
        printf("DISARIUM NO.");
        else
        printf(" NOT DISARIUM NO.");
      
getch();
}
