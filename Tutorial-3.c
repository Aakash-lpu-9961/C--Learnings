#include <stdio.h>
struct student
{
    char name[600];
    int roll[600];
    float salary[600];
    char id[600];
};
main()
{
    struct student stu[2];
    for (int i = 0; i <= 2; i++)
    {
        printf("\n Enter Employee-%d Name:", i + 1);
        gets(stu[i].name);
        /*printf("\n Enter roll no of student-%d:", i + 1);
        scanf("\n%d", &stu[i].roll);
        printf("\n Enter salary of student-%d:", i + 1);
        scanf("\n%f", &stu[i].salary);
        printf("\n Enter ID of student-%d:", i + 1);
        scanf("\n%c", &stu[i].id);*/
    }
    printf("\n Name of Student- %s", stu[0].name);
    printf("\n Name of Student- %s", stu[1].name);
    printf("\n Name of Student- %s", stu[2].name);
    for (int i = 0; i <= 2; i++)
    {
        printf("\n Employee-%d Name is: %s", i + 1, stu[i].name);
        /*printf("\n Roll no of student-%d is: %d", i + 1, stu[i].roll);
        printf("\n Salary of student-%d is:%f", i + 1, stu[i].salary);
        printf("\n ID of student-%d is:%c", i + 1, stu[i].id);*/
    }
}