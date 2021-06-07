//HCF of 2 numbers
#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b,h;
    printf("Enter 2 no.s-->");
    scanf("%d %d",&a,&b);
    h=hcf(a,b);
    printf("\n\nThe result is-->%d\a\a\a",h);
    getch();
}
int hcf(int r,int f)
{
    if(r%f==0)
    return f;
    else
    return hcf(f,r%f);
    
}