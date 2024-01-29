#include <stdio.h>

void calculate_the_maximum(int n, int k) {
    int and=0,or=0,xor=0;
    int t1,t2,t3;
    for(int a=1; a<n;a++)
    {
        for (int b = a+1; b<=n; b++)
        {
          t1= a&b; t2= a|b; t3= a^b;
          if (t1<k)
            and = and>t1 ? and:t1; 
          if (t2<k)
            or = or>t2 ? or:t2; 
          if (t3<k)
            xor = xor>t3 ? xor:t3; 
        }
    }
    printf("%d\n%d\n%d\n",and,or,xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
/*
calculate_the_maximum has the following parameters:

int n: the highest number to consider
int k: the result of a comparison must be lower than this number to be considered

Prints

Print the maximum values for the and, or and xor comparisons, each on a separate line.

Sample Input 0
5 4

Sample Output 0
2
3
3


Sample Input
3 3
for n=3 k=3

a b   and or xor
1 2   0   3  3
1 3   1   3  2
2 3   2   3  1

For the and comparison, the maximum is . For the or comparison, none of the values is less than , so the maximum is . 
For the xor comparison, the maximum value less than  is . The function should print:

2
0
2
*/