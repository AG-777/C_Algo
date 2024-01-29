// print corressponding name of number if less than 10 else print odd or even based on number
#include <stdio.h>

int main()
{
  int a, b;
  scanf("%d\n%d", &a, &b);
  // Complete the code.
  char arr[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  for (int i = a; i <= b; i++)
  {
    if (i <= 9)
      printf("%s\n", arr[i - 1]);
    else
    {
      if (i % 2 == 0)
        printf("even\n");
      else
        printf("odd\n");
    }
  }

  return 0;
}

/*
method 2
int main()
{
  int a, b;
  scanf("%d\n%d", &a, &b);
  // Complete the code.
  char *lessNums[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  for (int i = a; i <= b; i++)
  {
    if (i < 10)
    {
      printf("%s\n", lessNums[i - 1]);
    }
    else
    {
      (i % 2 != 0 ? printf("odd\n") : printf("even\n"));
    }
  }

  return 0;
}
*/
