#include <stdio.h>
#include <stdlib.h>

int main()
{
    size_t n;  // Use size_t instead of int
    int *arr;

    printf("Enter the number of elements you want: ");
    scanf("%zu", &n);  // %zu for size_t

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the %zu elements:\n", n);
    for (size_t i = 0; i < n; i++)
    {
        printf("Enter: ");
        scanf("%d", &arr[i]);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    free(arr);
    return 0;
}
