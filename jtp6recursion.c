#include <stdio.h>
int fibonnaci(int a);
int main()
{
  int num,ans;
  printf("Enter a number: ");
  scanf("%d",&num);
  ans = fibonnaci(num);
  printf("%dth fibonnaci number is %d\n",num,ans);
}
int fibonnaci(int a)
{
  if(a == 0)
  {
    return 0;
  }
  else if (a == 1)
  {
    return 1;
  }
  else
  {
    return fibonnaci(a-1) + fibonnaci(a-2);
  }
}