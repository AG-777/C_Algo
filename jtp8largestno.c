//Largest and 2nd largest no. in array
#include <stdio.h>

int main ()
{
    
    int num;
    printf("How many elements you want to enter? ");
    scanf("%d",&num);
    int arr[num];
    printf("Enter the elements: ");
    for (int i=0; i<num; i++)
        scanf("%d",&arr[i]);

    int largest = arr[0],sec_largest = arr[1];
    
    for (int i=0; i<num; i++)
    {
        if (arr[i] > largest)
        {
            sec_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > sec_largest && largest != arr[i])
        {
            sec_largest = arr[i];
        }
    }
    printf("Largest no. is %d and 2nd largest is %d\n",largest,sec_largest);
}