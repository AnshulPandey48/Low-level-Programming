#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100], b[100][100], sum[100][100];
    int r, c;
    printf("enter the number of rows :  ");
    scanf("%d", &r);
    printf("enter the number of columns :  ");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the elements of matrix a :  ");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the elements of matrix a :  ");
            scanf("%d", &b[i][j]);
        }
    }

    // now adding two matrix

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d  ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}