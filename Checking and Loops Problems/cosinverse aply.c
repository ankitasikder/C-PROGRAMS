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
     int L1,L2,G1,G2,D;
     printf("Enter the values of latitudes=");
     scanf("%d %d",&L1,&L2);
     printf("Enter the values of longiitudes=");
     scanf("%d %d",&G1,&G2);
     D=3963*(acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1)));
     printf("The distance in neutical miles is=%d",D);
getch();
}
