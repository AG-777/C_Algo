#include <stdio.h>
int max_of_four(int a,int b,int c,int d);
int main() 
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("max no. is %d\n", ans);
    
    return 0;
}

int max_of_four(int a,int b,int c,int d)
{
    a = a > b ? a : b;
    a = a > c ? a : c;
    a = a > d ? a : d;
    return a;
}
/*
method 2
int max_of_four(int a,int b,int c,int d)
{
    return (a > b ? (a > c ? (a > d ? a : d) : (c > d ? c : d)) : (b > c ? (b > d ? b : d) : (c > d ? c : d)));   
}

method 3
use if else statements
*/