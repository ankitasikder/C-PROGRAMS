//WAP TO MERGE TWO ARRAYS
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr1[5],arr2[5],merge[10],size1,size2,i,k;
    printf("Enter array 1 size\n");
    scanf("%d",&size1);
    printf("Enter array 2 size\n");
    scanf("%d",&size2);
    printf("Array 1 element\n\a");
    for(i=0;i<size1;i++)
    {
                scanf("%d",&arr1[i]);
                merge[i]=arr1[i];
    }
    k=i;
    printf("Array 2 element\n\a");
    for(i=0;i<size2;i++)
    {
                scanf("%d",&arr2[i]);
                merge[k]=arr2[i];
                k++;
    }
    printf("\nThe new array after merging:\n\a");
    for(i=0;i<k;i++)
    {
               printf("%d ",merge[i]);
    }
    getch();
    }