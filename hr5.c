// print the lowercase English word corresponding to the number
#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  char *ans[15];
  switch (n)
  {
  case 1:
    *ans = "one";
    break;
  case 2:
    *ans = "two";
    break;
  case 3:
    *ans = "three";
    break;
  case 4:
    *ans = "four";
    break;
  case 5:
    *ans = "five";
    break;
  case 6:
    *ans = "six";
    break;
  case 7:
    *ans = "seven";
    break;
  case 8:
    *ans = "eight";
    break;
  case 9:
    *ans = "nine";
    break;
  default:
    *ans = "Greater than 9";
  }
  printf("%s\n", *ans);
}
/*
method 2        Using if else
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n > 0) {
        if (n == 1) {
            printf("one");
        }
        else if (n == 2) {
            printf("two");
        }
        else if (n == 3) {
            printf("three");
        }
        else if (n == 4) {
            printf("four");
        }
        else if (n == 5) {
            printf("five");
        }
        else if (n == 6) {
            printf("six");
        }
        else if (n == 7) {
            printf("seven");
        }
        else if (n == 8) {
            printf("eight");
        }
        else if (n == 9) {
            printf("nine");
        }
        else {
        printf("Greater than 9");
        }
    }
}

*/

/*
method 3       using array
int main(void)
{
  int n;
  char num[10][10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  scanf("%d", &n);
  if (n > 9)
    printf("Greater than 9\n");
  else if (n < 10)
    printf("%s", num[n - 1]);
  return 0;
}

or

int main()
{
    int n;
    scanf("%d",&n);
    char array[10][6] = {"one","two","three","four","five","six","seven","eight","nine"};
    if (n <= 9)
        printf("%s",array[n-1]);
    else
        printf("Greater than 9\n");
}

*/