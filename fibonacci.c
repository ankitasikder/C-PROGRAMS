//fibonacci series using recurcion
#include<stdio.h>
int fibonacci(int a)
{
	if (a==0 || a==1)
	{
		return a;
	}
	else 
	{
		return fibonacci(a-1)+fibonacci(a-2);
	}
}
int main()
{
	int f,i;
	printf("Enter the number upto which you want to print the fibonacci series-->\n");
	scanf("%d",&f);
	printf("The fibonacci series as your choice-->\n");
	for(i=0;i<f;i++)
	{
		printf("%d  ",fibonacci(i));
	}
	
}
