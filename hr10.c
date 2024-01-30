//printing box pattern with numbers
#include <stdio.h>


int main() 
{

    int n;
    scanf("%d", &n);
    int temp_i,temp_n =n;

    for (int i=0; i<2*n-1; i++){

        temp_i = n-temp_n;

        for (int j=0; j<2*n-1; j++){
            
            if (j< temp_i){
                printf("%d ",n-j);
            }
            else if (j<2*n-temp_i-1){
                printf("%d ",temp_n);
            }
            else {
                printf("%d ",j-n+2);
            }
        }
        
        if (i+1<n){
            temp_n--;
        }
        else{
            temp_n++;
        }
        printf("\n");
    }
    return 0;
}



/*
method 2
int main() 
{

    int n;
    scanf("%d", &n);
    int ele = n;
    int mid = n;
  	// Complete the code to print the pattern.
    for (int i=0; i< 2*n -1;i++)
        {
            if (i< mid)
                {   for(int j=0; j<i;j++)
                        {
                            printf("%d ",n);
                            n--;
                        }
                    for(int j=0; j< 2*ele -1;j++)
                        {
                            printf("%d ",ele);
                        }
                    for(int j=0; j<i;j++)
                        {   
                            n++;
                            printf("%d ",n);
                            
                        }
                    ele--;
                }
            else 
                {   for(int j=0; j<(2*mid-1)-i-1;j++)
                        {
                            printf("%d ",n);
                            n--;
                        }
                    for(int j=0; j< 2*(ele+2) -1;j++)
                        {
                            printf("%d ",ele+2);
                        }
                    for(int j=0; j<(2*mid-1)-i-1;j++)
                        {   
                            n++;
                            printf("%d ",n);
                            
                        }
                    ele++;    
                    
                }
        
        printf("\n");
        }
    return 0;
}
*/
/*
method 3
int main()
{

  int n;
  scanf("%d", &n);
  for (int i = 0; i < (n * 2 - 1); i++)
  {
    int min = 0;
    for (int j = 0; j < (n * 2 - 1); j++)
    {
      if (j > i || j > (n * 2 - 2) - i)
        --min;
      printf("%d ", n - min);
      if (j < i || (j < (n * 2 - 2) - i))
        ++min;
    }

    printf("\n");
  }
}
*/

/*
method 4
int main()
{

  int n;
  scanf("%d", &n);
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    for (int j = 1; j <= 2 * n - 1; j++)
    {
      int min = i < j ? i : j;
      min = min < 2 * n - i ? min : 2 * n - i;
      min = min < 2 * n - j ? min : 2 * n - j;

      printf("%d ", n - min + 1);
    }
    printf("\n");
  }
  return 0;
}
*/