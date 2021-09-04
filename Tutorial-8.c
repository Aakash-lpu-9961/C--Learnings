//Program to demonstrate the comparision of Pointers//


#include <stdio.h>
main()
{
    int a[]={5,6,7,8,9,10,11,12,13};
    int *p=&a[2];
    int *q=&a[4];
    printf("\n%d",*p<=*q);  //1
    printf("\n%d",*p>=*q);  //0
    printf("\n%d",*p==*q);  //0
    return 0;
    
}