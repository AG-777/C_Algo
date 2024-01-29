// Converting number to binary
#include <stdio.h>
#include <stdbool.h>
int main()
{
  int num,buffer, index = 0;
  scanf("%d", &num);
  long int base = 2;
  int bytes = (int)sizeof(num);
  int bits = bytes*8;
  int arr[bits];
  for (int i=0; i<bits; i++)
  {
    arr[i] = 0;
  
  }
  base = 4294967296;
  while(num != 0)
  { 
      while (base > num)
      {
        base /= 2;
      }
      buffer = base;
      while (buffer != 1)
      {
        index++;
        buffer /= 2;
      }
      arr[index] = 1;
      num -= base;
      index = 0;
  }
  bool a = 0;
  for (int j = bits-1; j >= 0; j--)
  {
    if (a==1 || arr[j]==1)
    {
      printf("%d ", arr[j]);
      a = 1;
    }
  }
  printf("\n");
}
