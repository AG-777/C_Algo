// Using callback function to improve functionality of Bubble sort 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(int a, int b){
    if (a > b) return 1;
    else return -1;
}
int abs_compare(int a,int b){
    if (abs(a) > abs(b)) return 1;
    else return -1; 
}
void BubbleSort(int *A,int n,int (*compare)(int,int)){
    int temp;
    for(int i=0;i<n;i++){
        for (int j=0;j<n-1;j++){
            if(compare(A[j],A[j+1]) > 0){
                temp = A[j];
                A[j]= A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main(){
    int A[]= {34,12,-54,-12,78,-32,87};
    int i;
    BubbleSort(A,7,compare);
    printf("Compare:\n");
    for(i=0;i<7;i++)
    {
        printf("%d ",*(A+i));
    }
    printf("\nAbsolute compare:\n");
    BubbleSort(A,7,abs_compare);
    for(i=0;i<7;i++)
    {
        printf("%d ",*(A+i));
    }
    printf("\n");
}
