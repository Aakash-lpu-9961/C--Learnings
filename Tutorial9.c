#include<stdio.h>
#include<stdlib.h>
struct emp
{
    char ename[60];
    float esal[60];
    int eno[60];
};
main()
{
    struct emp *ptr;
    ptr=(struct emp*)malloc(sizeof(struct emp));
    if(ptr== NULL)
    {
        printf("\a Out of Memory");
    }
    else
    {
        printf("\n Enter Employee details:");
        scanf("%d %s %f",  &ptr->eno,  ptr->ename,  &ptr->esal);
        printf("\t%d \t%s \t%f",  ptr->eno,  ptr->ename,  ptr->esal);
    }
}
/*Program to understand the use of malloc() function for DMA*/