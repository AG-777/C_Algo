// Set the value of a to their sum, and b to their absolute difference
// don't return or print any statement
#include <stdio.h>

void update(int *a,int *b) {
    *a = *a + *b;
    *b = *a - *b > *b ? *a - 2*(*b) : 2*(*b) - *a;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
/*
method 2       Using absolute function
#include <stdio.h>
#include <stdlib.h>  //include this library for abs()
void update(int *a,int *b) {
    int k = *a;
    *a = *a + *b;
    *b = abs(k-*b);
}
*/
/*
method 3

void update(int *a,int *b) {
    int k = *a;
    *a += *b;
    *b = k-*b;
    if (*b < 0)
      *b *= (-1);
}

*/