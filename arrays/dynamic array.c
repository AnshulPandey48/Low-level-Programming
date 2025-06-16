#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *arr;
    printf("enter the number of element you want : ");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    if(arr == NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    printf("Enter the number of ")
}