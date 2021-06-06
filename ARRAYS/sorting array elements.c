//SORTING ARRAY ELEMENTS
#include<stdio.h>
#define MAXSIZE 10
void main()
{
     int array[MAXSIZE],i,j,num,temp;
     printf("Enter the value of num::\n");
     scanf("%d",&num);
     printf("Enter the elements one by one:\n");
     for(i=0;i<num;i++)
     {
           scanf("%d",&array[i]);
     }
     for(i=0;i<num;i++)
     {
           printf("%d",array[i]);
     }
     for(i=0;i<num;i++)//bubble sorting
     {
         for(j=0;j<(num-i-1);j++)
         {
                if(array[j]>array[j+1])
                {
                       temp=array[j];
                       array[j]=array[j+1];
                       array[j+1]=temp;
                }
         }
     }
     printf("\nThe sorted array is ...\n\a");
     for(i=0;i<num;i++)
     {
         printf("%d\n",array[i]);
     }
     getch();
}
