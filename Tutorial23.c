#include<stdio.h>
main()
{
    int arr[5]={10,20,30,40,50};
    printf("\n Hi!!");
    int *ptr;
    ptr=arr;
    printf("\n arr:%p",&arr);
    printf("\n arr:%p",arr);
    printf("\n arr:%p\n",arr+1);
    for(int i=0;i<5;i++)
    {
        printf("\n arr[%d]:%d\t\t",i,*(ptr+i));
    }

}