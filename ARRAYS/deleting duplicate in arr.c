/*
  C program to delete all duplicate elements from array
 */
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    int arr[MAX_SIZE]; 
    int size;          
    int i, j, k;       

    
    printf("Enter size of the array : ");
    scanf("%d", &size);

    
    printf("Enter elements in array --> ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }



    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            
            if(arr[i] == arr[j])
            {
                
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                
                size--;

              
                j--;
            }
        }
    }



    printf("\nArray elements after deleting duplicates --> ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}
