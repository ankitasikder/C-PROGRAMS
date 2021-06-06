//marks and grades
#include<Stdio.h>
#include<conio.h>
void main()
{
     float m,p,cs,c,tot,avg;
     printf("Enter the marks of Math");
     scanf("%f",&m);
     printf("Enter the marks of Phy");
     scanf("%f",&p);
     printf("Enter the marks of Chem");
     scanf("%f",&c);
     printf("Enter the marks of Cs");
     scanf("%f",&cs);
     tot=m+p+c+cs;
     avg=tot/4;
     printf("Total=%.2f\n Average=%.2f\n",tot,avg);
     if(avg>=80)
     printf("Grade A+"); 
     else if(avg>60 && avg<=79.5)
     printf("Grade A"); 
     else if(avg>50 && avg<=59.5)
     printf("Grade B"); 
     else if(avg>40 && avg<=49.5)
      printf("Grade C"); 
     else 
     printf("Fail");
     getch();
}
