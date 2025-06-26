#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    int emp_id, search_id;
    char emp_name[50];
    fp = fopen("employe.txt", "w");
    if (fp == NULL)
    {
        printf("file opening failed\n");
        return 1;
    }
    printf("Enter the name of employee:");
    scanf("%s", &emp_name);
    fprintf(fp, emp_name);
    
}