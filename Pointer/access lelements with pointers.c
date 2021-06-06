//access array elements using pointers
#include<stdio.h>
#include<stdio.h>
void main()
{
     int data[5],i;
     printf("Enter elements=\n");
     for(i=0;i<5;i++)
     {
                     scanf("%d",&data[i]);
     }
     printf("The array is->\n");
     for(i=0;i<5;i++)
     {
                     printf("%d\n",*(data+i));
     }
                     getch();
     }