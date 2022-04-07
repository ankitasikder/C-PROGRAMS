#include<stdio.h>
int fibonacci(int n)
{
    if(n<=0)
       return n; 
    else 
       return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
     int num;
     printf("How many numbers of Fibonacci series you want to print: ");
     scanf("%d",&num);
     printf("Fibonacci series:\n");
     for(int i=0; i<num; i++)
     {
         printf("%d\t",fibonacci(i));
     }
     return 0;
}
/*
int main()
{
     int num;
     printf("Which term of Fibonacci series
                    you want to find: ");
     scanf("%d",&num);
     printf("%dth term is %d\n",num,
                        fibonacci(num));
     return 0;
}
*/
