//Write a Table of input number
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int i = 1;
  do
  {
    printf("%d x %d = %d\n",n,i,n*i);
    i++;
  }
  while (i <= 10);
  return 0;
}