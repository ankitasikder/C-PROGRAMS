//cartesian co-ordinates to polar co-ordinates conversion
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
     int x,y,r,t;
     printf("Enter the X axis co-ordinate=");
     scanf("%d",&x);
     printf("Enter the Y axis co-ordinate=");
     scanf("%d",&y);
     r=sqrt(pow(x,2)+pow(y,2));
     t=atan(y/x);
     printf("The polar co-ordinates are=(%d,%d) which is equal to cartesan co-ordinate=(%d,%d)",r,t,x,y);
     
getch();
}
