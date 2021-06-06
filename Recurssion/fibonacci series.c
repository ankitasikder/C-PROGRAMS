//Fibonacci series C program using recursion
/*ALL THESE WORKS ARE DONE BY 

ANKITA SIKDER

STUDENT OF BTECH, IN UEMK

CONTACT NO.: 8583939774

EMAIL ID: ankita.sikder14@gmail.com
*/
#include<stdio.h>
int f(int);

int main()
{
  int n, i = 0, c;
  printf("The range for Fibonacci Series:\n");
  scanf("%d", &n);

  printf("Fibonacci series terms are:\n");

  for (c = 1; c <= n; c++)
  {
    printf("%d\n", f(i));
    i++;
  }

  return 0;
}

int f(int n)
{
  if (n == 0 || n == 1)
    return n;
  else
    return (f(n-1) + f(n-2));
}
