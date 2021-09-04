#include<stdio.h>
int* get()
{
    static int i=100;
    return(&i);
}
int main()
{
    int *ptr=get();
    printf("\n %d",*ptr);
    printf("\n %p",  ptr);
    return 0;
}