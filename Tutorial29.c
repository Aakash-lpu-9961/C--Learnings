#include<stdio.h>
main()
{
	int A[5]={20,40,60,80,100};
	int i;
	int *ptr;
	ptr=A;
	for(i=0;i<5;i++)
	{
		printf("\n Values of an array A are:%d",A[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Adress of an array A are:%d",&A[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Adress of A[%d] is : %u",i,(ptr+i));
	}
	for(i=0;i<5;i++)
	{
		printf("\n Value of A[%d] is : %u",i,*(ptr+i));
	}
}
