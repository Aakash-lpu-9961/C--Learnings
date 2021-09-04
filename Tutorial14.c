//Write an algorithm to display grade scored by student by taking marks scored.//
#include<stdio.h>
#include<string.h>
#include <process.h>
main()
{
    int a;
    char ch[30];
    int ans;
    printf("\n Enter your Child's Name:");
    gets(ch);
    printf("\n Your child's Name is %s",ch);
    printf("\n-------------------------------------------------------------\n");
    printf("\t\t GRADE OBTAINED BY STUDENTS");
    printf("\n-------------------------------------------------------------\n");
    check:printf("\tEnter total marks of student out of 720: ");
    scanf("\n %d",&a);
    printf("\t\t You entered %d",a);
    printf("\n\t Entered marks is Correct, Please Confirm\n\n");
    printf("\t\t[1] Yes \t\t\t [2] NO\n\n");
    printf("\n Enter your choice [1] or [2]:");
    scanf("\n %d",&ans);
    printf("\n\t\t Your choice is: %d",ans);
    printf("\n-------------------------------------------------------------\n");
    if (ans == 1)
    {
        printf("\n \t\t\t THANK YOU");
        printf("\n-------------------------------------------------------------\n");
        if (a>=100 && a<=200)
    {
        printf("\n %s  grade is: E",ch);
    }
    else if (a>200 && a<=300)
    {
        printf("\n %s  grade is: D",ch);
    }
    else if (a>300 && a<=400)
    {
        printf("\n %s  grade is: C",ch);
    }
    else if (a>400 && a<=500)
    {
        printf("\n %s  grade is: B",ch);
    }
    else if (a>500 && a<=600)
    {
        printf("\n %s  grade is: A",ch);
    }
    else if (a>600 && a<=720)
    {
        printf("\n %s  grade is: Outstanding",ch);
    }
    else if (a>=0 && a<=100)
    {
        printf("\n %s  grade is: Fail",ch);
    }
    }
    else
    {
        printf("\n Please enter once again by checking the marks of %s properly.",ch);
        goto check;
    }
    
}