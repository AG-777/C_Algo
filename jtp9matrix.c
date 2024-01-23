//Printing matrix in C
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter dimensions of Matrix\nNo. of Rows: ");
    scanf("%d",&m);
    printf("No. of Columns: ");
    scanf("%d",&n);
    int arr[m][n];
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("Enter arr[%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix formed is:\n");
    for (int i = 0; i<m; i++)
    {
        for (int j=0; j<n; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}