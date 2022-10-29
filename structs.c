#include <stdio.h>

typedef struct 
{
    int eNo;
    char eName[30];
    int DOJ;
    int salary;
}
employee;

int main()
{
    int nEmployees;

    printf("Enter number of employees: ");
    scanf("%d", &nEmployees);

    employee employees[nEmployees];

    for(int i = 0; i < nEmployees; i++)
    {
        printf("------Employee no. %d------\n", i + 1);
        printf("Enter eNo: ");
        scanf("%d", &employees[i].eNo);
        printf("Enter eName: ");
        scanf("\n%[^\n]s", &employees[i].eName);
        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
        printf("Enter DOJ: ");
        scanf("%d", &employees[i].DOJ);
        printf("\n");
    }

    for(int i = 0; i < nEmployees; i++)
    {
        printf("------Employee no. %d------\n", i + 1);
        printf("eNo: %d\n", employees[i].eNo);
        printf("eName: %s\n", employees[i].eName);
        printf("DOJ: %d\n", employees[i].DOJ);
        printf("Salary: %d\n", employees[i].salary);
        printf("\n");
    }

}