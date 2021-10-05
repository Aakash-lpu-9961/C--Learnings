#include<stdio.h>
main()
{
	printf("\n Check Syntax");
	int a=10;
	int *A;
	A=&a;
	printf("\n Value of a is:%d",a);
	printf("\n Adress of a is : %u", &a);
	printf("\n Value of A is: %d",A);
	printf("\n Value of *A is:%d",*A);
	printf("\n Adress of (A+1) is:%u",(A+1));
	printf("\n Value of *(A+1) is:%d",*(A+1));
}
