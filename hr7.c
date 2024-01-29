// To take sum of digits of a number
#include <stdio.h>
int main()
{

  int n, temp;
  scanf("%d", &n);
  int total = 0;
  while (n != 0)
  {
    temp = n % 10;
    total += temp;
    n /= 10;
  }
  printf("%d\n", total);
  return 0;
}

/*
method 2                Using recursion

#include <stdio.h>

int add_last_digit(int x, int sum){
    int last_digit, remaining_digits;
    
    if (x >= 1 && x <= 9){
        last_digit = x;
        remaining_digits = 0;
        return sum + last_digit;
    } else {
        last_digit = x % 10;
        remaining_digits = (x - last_digit) / 10;
        return add_last_digit(remaining_digits, sum + last_digit);
    }
}

int main() {
    
    int n;
    scanf("%d", &n);
    printf("%d", add_last_digit(n, 0));
    return 0;
    
}
*/