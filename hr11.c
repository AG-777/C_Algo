#include <stdio.h>
#include <stdlib.h>

int main() {

    int size;
    scanf("%d",&size);
    int *arr = (int*)malloc(sizeof(int)*size);
    int total=0;
    for (int i=0; i<size; i++){
        scanf("%d",&arr[i]);
        total += arr[i];
    }
    printf("%d",total);
    return 0;
}

