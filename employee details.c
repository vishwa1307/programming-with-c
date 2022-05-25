#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[30];
    int age;
    int ph;
    int salary;
} Employee;
int main()
{
    int i, n=20;
    Employee employees[n];
    printf("Enter %d Employee Details \n \n \n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].name);
        //age
        printf("age: ");
        scanf("%d",&employees[i].age);
        //ph
        printf("ph: ");
        scanf("%d",&employees[i].ph);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
 
        printf("\n");
    }
    printf(" All Employees Details\n");
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \t ",employees[i].name);
        
        printf("age \t: ");
        printf("%d \t",employees[i].age);
 
        printf("ph \t: ");
        printf("%d \t",employees[i].ph);
 
        printf("Salary \t: ");
        printf("%d \t",employees[i].salary);
 
        printf("\n");
    }
    return 0;
}
