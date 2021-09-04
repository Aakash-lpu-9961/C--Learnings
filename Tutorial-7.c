#include<stdio.h>
main()
{
    int a[]={5,6,7,8,9,10};
    int *p=&a[2];
    printf("\n %d",*(p++));  
    printf("\n %d",*(p)); 
    printf("\n %d",*(p++));  
    printf("\n %d",*(p--)); 
    printf("\n %d",*(--p)); 
}
