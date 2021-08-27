#include <stdio.h>
struct employee
{
    char name[30];
    int employee_id;
    int exp;
    float salary;
}emp[5];

int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter employee name :\n");
        scanf("%s",emp[i].name);
        printf("Enter employee id :\n");
        scanf("%d",&emp[i].employee_id);
        printf("Enter experience of employee in years :\n");
        scanf("%d",&emp[i].exp);
        printf("Enter employee salary :\n");
        scanf("%f",&emp[i].salary);
    }
    for(i=0;i<5;i++)
    {
        printf("    \t\t\t\t\tDETAILS OF EMPLOYEE   \t\t\t\t\t\n");
        printf("NAME \t\t EMPLOYEE-ID EXPERIENCE \tSALARY\n");
        printf("%s   %d   %d   %0.2f\n",emp[i].name,emp[i].employee_id,emp[i].exp,emp[i].salary);
    }
    return 0;
}
