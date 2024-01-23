//Bubble Sort
#include <stdio.h>
int sort_array(int arr[]),temp;
int main()
{
  int array[10] = {6,3,7,12,45,44,32,40,49,21};
  sort_array(array);
  
}
int sort_array(int arr[10])
{
  for (int i=0; i<10; i++)
  {
    for (int j=i+1; j<10; j++)
    {
      if( arr[i] > arr[j])
      {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i=0; i<10; i++)
    printf("%d ",arr[i]);
  printf("\n");
}
