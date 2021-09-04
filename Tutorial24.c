#include<stdio.h>
int * get()
{
    static int i=10;
    return(&i);
}
void main()
{
    int *ptr=get();
    printf("\n %p",ptr);
    printf("\n %d",*ptr);
    return 0;
}