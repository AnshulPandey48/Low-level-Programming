#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
    int empid;
    char empname[20];
    char deparment[30];
    int empsal;
};
void displaydetails(struct employee emp[],int n){
    for(int i = 0 ; i <= n ; i++){
        printf("sallary : %d",emp[i].empsal);
        printf("id: %d",emp[i].empid);
        printf("name: %s",emp[i].empname);
        printf("department name: %s",emp[i].deparment);
    }
}
int main(){
    struct employee emp[20];
    int n = 20;
    for (int i = 0; i < n; i++)
    {
        printf("Enter name: ");
        scanf("%s",emp[i].empname);
    }
    displaydetails(emp,n);
    
}