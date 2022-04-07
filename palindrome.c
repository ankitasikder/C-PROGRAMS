//palindrome string check
#include<stdio.h>
#include<string.h>
int palindrome(char string[10])
{
	int i, j, len=0 ,f=0;
	len = strlen(string);
	for(i=0,j=len-1;i<=j;i++)
	{
		if(string[i]==string[j])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	    return 1;

	else
	    return 0;
        
	
}
int main()
{
	char a[10];
	printf("Enter the string to check for palindrome:\n");
	scanf("%s",&a);
	if(palindrome(a))
	   printf("Palindrome");
	else
	   printf("Not Palindrome");
	
}
