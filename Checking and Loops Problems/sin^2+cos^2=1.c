//sin^2 + cos^2=1
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<Stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
     double angle,ans;
     printf("The angle is=");
     scanf("%lf",&angle);
     ans=(sin(angle)*sin(angle))+(cos(angle)*cos(angle));
     if(ans==1)
     printf("YES");
     else
     printf("NO");
     
getch();
}
