/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
void main()
{
     int a;
     int arr[5]={1,2,3,4,5};
     arr[1]=++arr[1];
     a=arr[1]++;
     arr[1]=arr[a++];
     printf("%d %d",a,arr[1]);
     getch();
}
