#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int *ptr = &a;
    printf("value : %d\n", *ptr); // value
    int **q = &ptr;
    printf("address of ptr : %p\n", *q); // prints address of ptr
    printf("address of a : %p\n", ptr); // prints address of a
    
    printf("value of a : %d\n", **q); // prints value
    // a -> ptr -> q
    
    return 0;
}