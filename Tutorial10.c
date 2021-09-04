#include<stdio.h>
#include<stdlib.h>
main()
{
    int n, *arr;
    printf("\n Enter the number:");
    scanf("\n %d",&n);
    arr=(int *)calloc(n,sizeof(int));
    if(arr==NULL)
    {
        printf("\n No memory present , Sorry!!");
    }
    else
    {
        printf("\n Array elements are:\n");
        for(int i=0;i<n;i++)
        {
            printf("\t \a %d",*(arr+i));
        }
    }
}
/*Program to understand the use of calloc() function for DMA*/