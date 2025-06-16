#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("%d", *ptr);
    int *q = &ptr;
    printf("%d", *q);
    
    return 0;
}