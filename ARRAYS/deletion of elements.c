//Deletion of element
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
     int array[10],position,c,n;
     printf("Enter number of elements in array\n");
     scanf("%d",&n);
     printf("Enter %d elements\n",n);
     for(c=0;c<n;c++)//initialise
     scanf("%d",&array[c]);
     printf("Enter the location where you want to delete element\n");
     scanf("%d",&position);
     if(position>=n+1)
     printf("Deletion not possible\n");
     else
     {
         for(c=position-1;c<n-1;c++)//shift position
         array[c]=array[c+1];
         printf("Resultant array:\n");
         for(c=0;c<n-1;c++)//print result
         printf("%d\n",array[c]);
     }

getch();
}
