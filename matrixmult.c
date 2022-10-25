#include <stdio.h>

int main()
{
    int cols1, rows1;
    int cols2, rows2;
    printf("Enter rows and cols of first matrix: ");
    scanf("%d %d", &rows1, &cols1);
    while(1)
    {
        printf("Enter rows and cols for second matrix: ");
        scanf("%d %d", &rows2, &cols2);
        if(cols1 != rows2) 
            printf("Number of rows should be equal to number of collumns in arr1 ");
        else break;
    }

    int i, j, k;
    int arr1[rows1][cols1];
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols1; j++)
        {
            printf("Enter value for arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\n");
    
    int arr2[cols2][rows2];
     for(i = 0; i < rows2; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("Enter value for arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    int arr3[rows1][cols2];
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            int tempsum = 0;
            for(k = 0; k < cols1; k++)
            {
                tempsum += arr1[i][k] * arr2[k][j];
            }
            arr3[i][j] = tempsum;
        }
    }

    printf("Result: \n");
    for(i = 0; i < rows1; i++)
    {
        for(j = 0; j < cols2; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

}