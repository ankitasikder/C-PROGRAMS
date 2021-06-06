#include<Stdio.h>
#include<conio.h>
void main()
{
    int a[5],s=0,i,n,avg=0;
    printf("Enter the no.of subject=");
    scanf("%d",&n);
    //input aray
    for(i=0;i<n;i++)
    {
                    printf("Enter the no.of subject="); 
                    scanf("%d",&a[i]);
                    s=s+a[i];
    }
    //print array
    for(i=0;i<n;i++)
    {
                    printf("The no. isa[%d]=%d\n",i,a[i]);
    }
    avg=s/n;
    printf("The average is: %d",avg);
    getch();
}
