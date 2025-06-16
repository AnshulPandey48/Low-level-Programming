#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c, a[100][100], b[100][100], res[100][100];
    printf("enter the number of rows:  ");
    scanf("%d", &r);
    printf("enter the number of columns:  ");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the number of elements matrix a :  ");
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the number of elements matrix b :  ");
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = a[i][j] - b[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d", res[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}