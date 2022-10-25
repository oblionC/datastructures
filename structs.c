#include <stdio.h>

typedef struct 
{
    int eNo;
    char* eName;
    char* DOJ;
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
        printf("Enter eNo: ");
        scanf("%d", &employees[i].eNo);
        printf("Enter eName: ");
        scanf("%d", &employees[i].eName );
        printf("Enter salary: ");
        scanf("%d", &employees[i].salary);
        printf("Enter DOJ: ");
        scanf("%d", &employees[i].DOJ);
    }

}