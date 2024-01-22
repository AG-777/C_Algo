#include <stdio.h>
int factorial(int c);
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d",&num);
  int ans = factorial(num);
  printf("Factorial of %d is %d\n",num,ans);
}
int factorial(int c)
{
  if (c == 0)
  {
    return 0;
  }
  else if (c == 1)
  {
    return 1;
  }
  else
  {
    return c*factorial(c-1);
  }
}