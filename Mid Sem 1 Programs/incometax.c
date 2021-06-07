//income tax
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
     int income,tax;
     printf("Enter the amount of income=");
     scanf("%d",&income);
     if(income<5000 && income>6000)
     {
                    
          tax=income*10/100;
          printf("%d",tax);
     }
     else if(income<6000 && income>15000)
     {
           tax=100+(income*20/100);
           printf("%d",tax);
     }
     else if(income<15000)
     {
          tax=1900+(income*30/100);
          printf("%d",tax); 
     }
     else if(income==10000)
     {
            tax=100+((10000-6000)*20/100);
            printf("%d",tax);
     }
     else
     {
           tax=0;
           printf("%d",tax);
     }
     
getch();
}
