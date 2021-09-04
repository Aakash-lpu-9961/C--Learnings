#include<stdio.h>
main()
{
    int  *arr[10];
    int   abc[10]={10,20,30,40,50,60,70,80,90,100};
    for(int i=0;i<10;i++)
    {
        arr[i]=&abc[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("\n &arr[%d]:%p\t",i,&abc[i]);
        printf("\t\t *arr[%d]:%d\t",i,*arr[i]);
        printf("\t\t *(abc+%d):%d\t",i,*(abc+i));
        printf("\t\t *(arr+%d):%d\t",i,*(arr+i));
    }
    //printf("\n %d",*arr[2]);//
}