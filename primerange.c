#include<stdio.h>
int prime(int a)
{
	int i,f=0;
	for (i=2; i<=a/2;i++)
	{
		if(a%i==0)
		{
			f=1;
			return 0;
		}
	}
    return 1;
}
int main()
{
	int low, up, i;
	printf("Enter the lower limit of range:\n");
	scanf("%d",&low);
	printf("Enter the upper limit of range:\n");
	scanf("%d",&up);
	for(i=low; i<=up;i++)
	{
		   if(prime(i))
		      printf("%d \n",i);
	}
}
