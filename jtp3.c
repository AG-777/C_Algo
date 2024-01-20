//Triangle pattern
#include <stdio.h>
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int i = 1;
  int j;
  do
  {
    j = 1;
    do
    {
      printf("%d ",j);
      j++;
    } while (j <= i);
    printf("\n");
    i++;
  } while (n >= i);
  
  return 0;
}